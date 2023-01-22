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

#ifndef DUNE_PARSERS_HDF5_READER_HPP_INCLUDED_
#define DUNE_PARSERS_HDF5_READER_HPP_INCLUDED_

#include <map>
#include <memory>
#include <string>
#include <vector>

namespace hdf5
{
  namespace file
  {
    class File;
  }
}    // namespace hdf5

namespace DUNE
{
  namespace Parsers
  {
    using hdf5::file::File;

    //! Simplifies reading data and attributes from HDF5 format files.
    class HDF5Reader
    {
    public:
      //! Constructor.
      //! @param[in] filename path to an hdf5 file.
      HDF5Reader(std::string const& filename);

      //! Destructor.
      ~HDF5Reader();

      //! Structure holding an arbitrary multidimensional HDF5 dataset.
      template<typename T>
      struct HDF5Dataset
      {
        //! Number of points in each dimension.
        std::vector<size_t> dimensions;
        //! The data values in row-major (C-style) order.
        std::vector<T> data;
      };

      //! Check if a dataset exists in the given file.
      //! @param[in] path path to the dataset in the file.
      //! @return whether the dataset exists in the file.
      bool
      datasetExists(std::string const& path) const;

      //! Get a dataset and its dimensions.
      //! @param[in] path path to the dataset in the file.
      //! @return structure containing the data and the dataset dimensions.
      template<typename T>
      HDF5Dataset<T>
      getDataset(std::string const& path) const;

      //! Get an attribute.
      //! @param[in] path path to the node in the file where the attribute is
      //! stored.
      //! @param[in] attribute name of the attribute to get.
      //! @return the attribute's data.
      template<typename T>
      std::vector<T>
      getAttribute(std::string const& path, std::string const& attribute) const;

    private:
      //! Handle to an HDF5 file.
      std::unique_ptr<File> m_file;
    };
  }    // namespace Parsers
}    // namespace DUNE

#endif
