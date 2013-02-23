//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// Test program for DUNE::Database package.                                 *
//***************************************************************************
// ISO C++ headers
#include <iostream>
#include <sstream>
#include "Test.hpp"

// DUNE headers
#include <DUNE/Database.hpp>
#include <DUNE/Math.hpp>

using namespace DUNE::Database;
using namespace DUNE;

static bool
valuesAreOk(int id, double value, const std::string& name, std::pair<bool, Blob> data)
{
  std::stringstream expected_name;

  expected_name << "NAME" << id;

  if (expected_name.str() != name)
    return false;

  if (Math::round(10 * value) != id)
    return false;

  if (!data.first && (id % 2) == 0)
    return true;

  if ((int)data.second.size() != id)
    return false;

  int j = 0;
  for (j = 0; j < id; ++j)
    if (data.second[j] != j)
      return false;
  return true;
}

int
main(int argc, char** argv)
{
  Test test("DUNE::Database");

  Connection db(Connection::c_memory_db);

  bool passed = false;

  // Begin transaction test.
  try
  {
    db.beginTransaction();
    passed = true;
  }
  catch (std::runtime_error& e)
  {
    std::cerr << e.what() << std::endl;
  }
  test.boolean("Connection::beginTransaction()", passed);

  // Table drop test.
  passed = false;
  try
  {
    db.execute("DROP TABLE IF EXISTS TEST");
    passed = true;
  }
  catch (std::runtime_error& e)
  {
    std::cerr << e.what() << std::endl;
  }
  test.boolean("Connection::execute() -- DROP TABLE", passed);

  // Table creation test.
  passed = false;
  try
  {
    db.execute("CREATE TABLE TEST ( ID INTEGER PRIMARY KEY NOT NULL, VALUE REAL NOT NULL, NAME VARCHAR2 NOT NULL, DATA BLOB)");
    passed = true;
  }
  catch (std::runtime_error& e)
  {
    std::cerr << e.what() << std::endl;
  }
  test.boolean("Connection::execute() -- CREATE TABLE", passed);

  const int N = 10;

  // Insertion statement test.
  passed = false;
  try
  {
    Statement insertion("INSERT INTO TEST VALUES(?,?,?,?)", db);

    for (int i = 0; i < N; i++)
    {
      int id = i;
      double value = 0.1 * (double)i;
      std::stringstream name;
      Blob blob(i);

      name << "NAME" << i;

      for (int j = 0; j < i; j++)
        blob[j] = j;

      insertion << id
                << value
                << name.str();

      if ((i % 2) == 0)
        insertion << Null();  // NULL column
      else
        insertion << blob;

      insertion.execute();
    }
    passed = true;
  }
  catch (std::runtime_error& e)
  {
    std::cerr << e.what() << std::endl;
  }

  test.boolean("Statement -- INSERT", passed);

  // COMMIT test
  passed = false;
  try
  {
    db.commit();
    passed = true;
  }
  catch (std::runtime_error& e)
  {
    std::cerr << e.what() << std::endl;
  }

  test.boolean("Connection::commit()", passed);

  // SELECT test (1)
  passed = false;
  try
  {
    Statement query("SELECT ID, VALUE, NAME, DATA FROM TEST ORDER BY ID", db);

    int expected_id = 0;

    int c = 0;
    while (query.execute())
    {
      int id;
      double value;
      std::string name;
      std::pair<bool, Blob> blob;

      query >> id >> value >> name >> blob;

      if (!valuesAreOk(id, value, name, blob))
        break;
      ++c;
    }
    if (c == N)
      passed = true;
  }
  catch (std::runtime_error& e)
  {
    std::cerr << e.what() << std::endl;
  }
  test.boolean("Statement -- SELECT (1)", passed);

  // SELECT test (2)
  passed = false;
  try
  {
    Statement query("SELECT VALUE, NAME, DATA FROM TEST WHERE ID = ?", db);
    int c = 0;
    for (int id = 0; id < N; ++id)
    {
      query << id;

      if (!query.execute())
        break;

      double value;
      std::string name;
      std::pair<bool, Blob> blob;

      query >> value >> name >> blob;

      if (!valuesAreOk(id, value, name, blob))
        break;

      if (query.execute())
        break;
      ++c;
    }
    if (c == N)
      passed = true;
  }
  catch (std::runtime_error& e)
  {
    std::cerr << e.what() << std::endl;
  }
  test.boolean("Statement -- SELECT (2)", passed);

  // ROLLBACK test
  passed = false;
  try
  {
    double value;
    Statement update("UPDATE TEST SET VALUE = -VALUE", db);
    Statement query("SELECT SUM(VALUE) FROM TEST", db);

    db.beginTransaction();

    update.execute();
    query.execute();
    query >> value;
    if (value > 0)
      throw std::runtime_error("unexpected result");
    query.reset();

    db.rollback();
    query.execute();
    query >> value;
    if (value < 0)
      throw std::runtime_error("unexpected result");
    passed = true;
  }
  catch (std::runtime_error& e)
  {
    std::cerr << e.what() << std::endl;
  }
  test.boolean("Statement -- ROLLBACK", passed);

  // DELETE test
  passed = false;
  try
  {
    int count;
    db.execute("UPDATE TEST SET VALUE=0", &count);

    if (count != N)
      throw std::runtime_error("wrong number of rows");

    db.execute("DELETE FROM TEST", &count);

    if (count != N)
      throw std::runtime_error("wrong number of rows");

    passed = true;
  }
  catch (std::runtime_error& e)
  {
    std::cerr << e.what() << std::endl;
  }

  test.boolean("Connection -- Row count", passed);

  return 0;
}
