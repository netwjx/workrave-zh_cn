// DistributionClientMessageInterface.hh
//
// Copyright (C) 2002, 2003 Rob Caelers <robc@krandor.org>
// All rights reserved.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2, or (at your option)
// any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// $Id$
//

#ifndef DISTRIBUTIONCLIENTMESSAGEINTERFACE_HH
#define DISTRIBUTIONCLIENTMESSAGEINTERFACE_HH

enum DistributionClientMessageID
  {
    DCM_TIMERS  = 0x0010,
    DCM_MONITOR = 0x0018,
    DCM_IDLELOG = 0x0019,
    DCM_BREAKS  = 0x0020,
    DCM_STATS   = 0x0030,
  };

enum DistributionClientMessageType
  {
    DCMT_PASSIVE  = 0x0000,
    DCMT_MASTER   = 0x0010,
    DCMT_SIGNON   = 0x0020,
  };


class DistributionClientMessageInterface
{
public:
  virtual bool request_client_message(DistributionClientMessageID id,
                                      unsigned char **buffer,
                                      int *size) = 0;

  
  virtual bool client_message(DistributionClientMessageID id,
                              bool active,
                              char *client_id,
                              unsigned char *buffer,
                              int size) = 0;
};

#endif // DISTRIBUTIONCLIENTMESSAGEINTERFACE_HH
