//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Reply.hpp 12303 2013-01-01 02:14:25Z jbraga                      $:*
//***************************************************************************

#ifndef TRANSPORTS_EVOLOGICS_REPLY_HPP_INCLUDED_
#define TRANSPORTS_EVOLOGICS_REPLY_HPP_INCLUDED_

namespace Transports
{
  namespace Evologics
  {
    struct Reply
    {
      enum Type
      {
        RPL_NONE        = 0,
        RPL_OK          = 1 << 0,
        RPL_BUSY        = 1 << 1,
        RPL_RECV        = 1 << 2,
        RPL_RECVIM      = 1 << 3,
        RPL_DELIVERED   = 1 << 4,
        RPL_DELIVEREDIM = 1 << 5,
        RPL_FAILED      = 1 << 6,
        RPL_FAILEDIM    = 1 << 7,
        RPL_OTHER       = 1 << 31
      } type;

      union Data
      {
        struct
        {
          unsigned src;
          unsigned dst;
          bool flag;
          unsigned bitrate;
          int rms;
          unsigned integrity;
          unsigned prop_time;
          float velocity;
          char data[1024];
          unsigned data_size;
        } recv;

        struct
        {
          unsigned addr;
        } failed;

        struct
        {
          unsigned addr;
        } delivered;

        struct
        {
          unsigned addr;
        } busy;

        char other[1024];
      } data;
    };
  }
}

#endif
