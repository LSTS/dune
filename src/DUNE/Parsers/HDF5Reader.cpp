//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Miguel Aguiar                                                    *
//***************************************************************************

#include <algorithm>
#include <numeric>

#include "DUNE/I18N.hpp"

// This component depends on the h5cpp library
// (https://github.com/ess-dmsc/h5cpp.com).
// To enable support for h5cpp, set the H5CPP flag to 1 when calling CMake.
// If support for h5cpp is not enabled, the compilation will not fail, but
// the constructor of HDF5Reader will throw.
#if DUNE_H5CPP_ENABLED
#  include "h5cpp/hdf5.hpp"
#else
// Define hdf5::file::File to avoid compilation errors due to incomplete type
namespace hdf5
{
  namespace file
  {
    class File
    {};
  }    // namespace file
}    // namespace hdf5
#endif

#include "HDF5Reader.hpp"

namespace DUNE
{
  namespace Parsers
  {
    HDF5Reader::HDF5Reader(std::string const& filename)
        : m_file(std::make_unique<File>())
    {
#ifndef DUNE_H5CPP_ENABLED
      (void)filename;
      throw std::runtime_error(
          DTR("HDF5Reader::HDF5Reader(): support for HDF5 i/o is not "
              "enabled."));
#else
      try
      {
        *m_file = hdf5::file::open(filename, hdf5::file::AccessFlags::READONLY);

        if (m_file == nullptr)
          throw;
      }
      catch (...)
      {
        throw std::runtime_error(
            DTR("HDF5Reader::HDF5Reader(): unable to open file."));
      }
#endif
    }

    HDF5Reader::~HDF5Reader() = default;

#ifdef DUNE_H5CPP_ENABLED
    inline bool
    dsetExists(File const* f, std::string const& path)
    {
      return f->root().has_dataset(path);
      return false;
    }
#endif

    bool
    HDF5Reader::datasetExists(std::string const& path) const
    {
#ifdef DUNE_H5CPP_ENABLED
      return dsetExists(m_file.get(), path);
#else
      (void)path;
      return false;
#endif
    }

    template<typename T>
    HDF5Reader::HDF5Dataset<T>
    HDF5Reader::getDataset(std::string const& path) const
    {
#ifdef DUNE_H5CPP_ENABLED
      if (!dsetExists(m_file.get(), path))
        throw std::runtime_error(
            DTR("HDF5Reader::getDataset(): The requested dataset does not "
                "exist."));

      auto dset = m_file->root().get_dataset(path);
      auto dimensions =
          hdf5::dataspace::Simple(dset.dataspace()).current_dimensions();

      // Total number of gridpoints is the product of the sizes of all
      // dimensions.
      size_t size = std::accumulate(
          std::begin(dimensions), std::end(dimensions), 1, std::multiplies<size_t>());

      std::vector<T> data(size);
      dset.read(data);

      // Convert elements of dimensions to size_t
      std::vector<size_t> dimensions_(dimensions.size());

      std::copy(std::begin(dimensions),
                std::end(dimensions),
                std::begin(dimensions_));

      return {dimensions_, data};
#else
      (void)path;
      return {};
#endif
    }

    template<typename T>
    std::vector<T>
    HDF5Reader::getAttribute(std::string const& path,
                             std::string const& attribute) const
    {
#ifdef DUNE_H5CPP_ENABLED
      auto node = hdf5::node::get_node(m_file->root(), path);
      auto attributes = node.attributes;

      if (!attributes.exists(attribute))
        throw std::runtime_error(
            DTR("HDF5Reader::getAttribute(): requested attribute does not "
                "exist."));

      auto attr_handle = attributes[attribute];

      std::vector<T> data(attr_handle.dataspace().size());

      attr_handle.read(data);

      return data;
#else
      (void)path;
      (void)attribute;
      return {};
#endif
    }

    // Template specialization declarations for getDataset
    template HDF5Reader::HDF5Dataset<float>
    HDF5Reader::getDataset(std::string const&) const;

    template HDF5Reader::HDF5Dataset<double>
    HDF5Reader::getDataset(std::string const&) const;

    template HDF5Reader::HDF5Dataset<long double>
    HDF5Reader::getDataset(std::string const&) const;

    // Template specialization declarations for getAttribute
    template std::vector<char>
    HDF5Reader::getAttribute<char>(std::string const&,
                                   std::string const&) const;

    template std::vector<unsigned char>
    HDF5Reader::getAttribute<unsigned char>(std::string const&,
                                            std::string const&) const;

    template std::vector<int>
    HDF5Reader::getAttribute<int>(std::string const&, std::string const&) const;

    template std::vector<unsigned>
    HDF5Reader::getAttribute<unsigned>(std::string const&,
                                       std::string const&) const;

    template std::vector<long int>
    HDF5Reader::getAttribute<long int>(std::string const&,
                                       std::string const&) const;

    template std::vector<long unsigned>
    HDF5Reader::getAttribute<long unsigned>(std::string const&,
                                            std::string const&) const;

    template std::vector<long long unsigned>
    HDF5Reader::getAttribute<long long unsigned>(std::string const&,
                                                 std::string const&) const;

    template std::vector<float>
    HDF5Reader::getAttribute<float>(std::string const&,
                                    std::string const&) const;

    template std::vector<double>
    HDF5Reader::getAttribute<double>(std::string const&,
                                     std::string const&) const;

    template std::vector<long double>
    HDF5Reader::getAttribute<long double>(std::string const&,
                                          std::string const&) const;
  }    // namespace Parsers
}    // namespace DUNE
