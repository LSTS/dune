//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is subject to the terms and conditions defined in file         *
// 'LICENCE.md', which is part of this source code package.                 *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/Math/Matrix.hpp>

// Catch headers.
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

using DUNE::Math::Matrix;

TEST_CASE("basicGetters")
{
  Matrix a(5, 4);
  REQUIRE(a.rows() == 5);
  REQUIRE(a.columns() == 4);
  REQUIRE(a.size() == 20)  ;

  Matrix b(5, 5);
  REQUIRE(b.isSquare());
  REQUIRE_FALSE(a.isSquare());
}

TEST_CASE("equals")
{
  double d0[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0};
  Matrix m0(d0, 2, 3);

  double d1[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0};
  Matrix m1(d1, 2, 3);

  double d2[] = {1.0, 2.0, 3.0, 4.0};
  Matrix m2(d2, 2, 2);

  REQUIRE(m0 == m0);
  REQUIRE(m0 == m1);
  REQUIRE_FALSE(m0 == m2);
}

TEST_CASE("minimum")
{
  // Empty matrix.
  Matrix e;
  REQUIRE_THROWS_AS(min(e), Matrix::Error);

  // Regular matrix.
  double d[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0};
  Matrix m(d, 2, 3);
  REQUIRE(min(m) == Approx(1.0));
}

TEST_CASE("maximum")
{
  // Empty matrix.
  Matrix e;
  REQUIRE_THROWS_AS(max(e), Matrix::Error);

  // Regular matrix.
  double d[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0};
  Matrix m(d, 2, 3);
  REQUIRE(max(m) == Approx(6.0));
}

TEST_CASE("trimValuesInterval")
{
  // Empty matrix.
  Matrix e;
  REQUIRE_THROWS_AS(e.trimValues(-1, 1), Matrix::Error);

  // Regular matrix.
  double d[] = {-90, 0, 0, 90};
  Matrix m(d, 2, 2);
  m.trimValues(-1, 1);

  REQUIRE(m(0, 0) == Approx(-1));
  REQUIRE(m(0, 1) == Approx(0));
  REQUIRE(m(1, 0) == Approx(0));
  REQUIRE(m(1, 1) == Approx(1));
}

TEST_CASE("trimValuesSingle")
{
  // Empty matrix.
  Matrix e;
  REQUIRE_THROWS_AS(e.trimValues(1), Matrix::Error);

  // Regular matrix.
  double d[] = {-90, 0, 0, 90};
  Matrix m(d, 2, 2);
  m.trimValues(1);

  REQUIRE(m(0, 0) == Approx(-1));
  REQUIRE(m(0, 1) == Approx(0));
  REQUIRE(m(1, 0) == Approx(0));
  REQUIRE(m(1, 1) == Approx(1));
}

TEST_CASE("absoluteValueMatrix")
{
  double d0[] = {-1.0, -2.0, -3.0, -4.0, -5.0, 6.0};
  Matrix m0(d0, 2, 3);

  double d1[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0};
  Matrix m1(d1, 2, 3);

  REQUIRE(abs(m0) == m1);
}

TEST_CASE("multiplySquareBySquare")
{
  double d0[] = {1, 2, 3, 4};
  Matrix m0(d0, 2, 2);
  double d1[] = {1, 2, 3, 4};
  Matrix m1(d1, 2, 2);

  Matrix r = m0.multiply(m1);

  REQUIRE(r(0, 0) == Approx(7.0));
  REQUIRE(r(0, 1) == Approx(10.0));
  REQUIRE(r(1, 0) == Approx(15.0));
  REQUIRE(r(1, 1) == Approx(22.0));
}

TEST_CASE("addSquareBySquare")
{
  double d0[] = {1, 2, 3, 4};
  Matrix m0(d0, 2, 2);
  double d1[] = {1, 2, 3, 4};
  Matrix m1(d1, 2, 2);

  Matrix r = m0 + m1;

  REQUIRE(r(0, 0) == Approx(2.0));
  REQUIRE(r(0, 1) == Approx(4.0));
  REQUIRE(r(1, 0) == Approx(6.0));
  REQUIRE(r(1, 1) == Approx(8.0));
}

TEST_CASE("subtractSquareBySquare")
{
  double d0[] = {0.2, 0.1, 0.3, 0.3};
  Matrix m0(d0, 2, 2);
  double d1[] = {0.3, 0.4, 0.5, 0.2};
  Matrix m1(d1, 2, 2);

  Matrix r = m0 - m1;

  REQUIRE(r(0, 0) == Approx(-0.1));
  REQUIRE(r(0, 1) == Approx(-0.3));
  REQUIRE(r(1, 0) == Approx(-0.2));
  REQUIRE(r(1, 1) == Approx(0.1));
}

TEST_CASE("divideSquareBySquare")
{
  double d0[] = {1, 2, 3, 4};
  Matrix m0(d0, 2, 2);
  double d1[] = {4, 5, 6, 7};
  Matrix m1(d1, 2, 2);

  Matrix r = m0 / m1;

  REQUIRE(r(0, 0) == Approx(0.25));
  REQUIRE(r(0, 1) == Approx(0.40));
  REQUIRE(r(1, 0) == Approx(0.50));
  REQUIRE(r(1, 1) == Approx(0.57143));
}

TEST_CASE("arithmeticEmpty")
{
  // Both matrices are empty.
  Matrix m0;
  Matrix m1;
  REQUIRE_THROWS_AS(m0.multiply(m1), Matrix::Error);
  REQUIRE_THROWS_AS(m0 + m1, Matrix::Error);
  REQUIRE_THROWS_AS(m0 - m1, Matrix::Error);
  REQUIRE_THROWS_AS(m0 / m1, Matrix::Error);

  // Left matrix is empty.
  double d2[] = {1, 2, 3, 4};
  Matrix m2(d2, 2, 2);
  REQUIRE_THROWS_AS(m0.multiply(m2), Matrix::Error);
  REQUIRE_THROWS_AS(m0 + m2, Matrix::Error);
  REQUIRE_THROWS_AS(m0 - m2, Matrix::Error);
  REQUIRE_THROWS_AS(m0 / m2, Matrix::Error);

  // Right matrix is empty.
  REQUIRE_THROWS_AS(m2.multiply(m0), Matrix::Error);
  REQUIRE_THROWS_AS(m2 + m0, Matrix::Error);
  REQUIRE_THROWS_AS(m2 - m0, Matrix::Error);
  REQUIRE_THROWS_AS(m2 / m0, Matrix::Error);
}

TEST_CASE("arithmeticIncompatible")
{
  double d0[] = {1, 2, 3, 4};
  Matrix m0(d0, 2, 2);

  double d1[] = {1, 2, 3, 4, 5, 6};
  Matrix m1(d1, 3, 2);
  REQUIRE_THROWS_AS(m0.multiply(m1), Matrix::Error);
  REQUIRE_THROWS_AS(m0 + m1, Matrix::Error);
  REQUIRE_THROWS_AS(m0 - m1, Matrix::Error);
  REQUIRE_THROWS_AS(m0 / m1, Matrix::Error);
}

TEST_CASE("sum")
{
  double d0[] = {1, 2, 3, 4};
  Matrix m0(d0, 2, 2);

  REQUIRE(sum(m0) == Approx(10));
}

TEST_CASE("squareSum")
{
  double d0[] = {1, 2, 3, 4};
  Matrix m0(d0, 2, 2);

  REQUIRE(squaresum(m0) == Approx(30));
}
