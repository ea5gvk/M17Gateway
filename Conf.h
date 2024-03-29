/*
 *   Copyright (C) 2015,2016,2017,2018,2020,2021 by Jonathan Naylor G4KLX
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#if !defined(CONF_H)
#define	CONF_H

#include <string>
#include <vector>

class CConf
{
public:
  CConf(const std::string& file);
  ~CConf();

  bool read();

  // The General section
  std::string  getCallsign() const;
  std::string  getSuffix() const;
  std::string  getRptAddress() const;
  unsigned int getRptPort() const;
  unsigned int getMyPort() const;
  bool         getDebug() const;
  bool         getDaemon() const;

  // The Log section
  unsigned int getLogDisplayLevel() const;
  unsigned int getLogFileLevel() const;
  std::string  getLogFilePath() const;
  std::string  getLogFileRoot() const;
  bool         getLogFileRotate() const;

  // The Network section
  unsigned int   getNetworkPort() const;
  std::string    getNetworkHosts1() const;
  std::string    getNetworkHosts2() const;
  unsigned int   getNetworkReloadTime() const;
  unsigned int   getNetworkHangTime() const;
  std::string    getNetworkStartup() const;
  bool           getNetworkRevert() const;
  bool           getNetworkDebug() const;

  // The Remote Commands section
  bool           getRemoteCommandsEnabled() const;
  unsigned int   getRemoteCommandsPort() const;

private:
  std::string  m_file;
  std::string  m_callsign;
  std::string  m_suffix;
  std::string  m_rptAddress;
  unsigned int m_rptPort;
  unsigned int m_myPort;
  bool         m_debug;
  bool         m_daemon;

  unsigned int m_logDisplayLevel;
  unsigned int m_logFileLevel;
  std::string  m_logFilePath;
  std::string  m_logFileRoot;
  bool         m_logFileRotate;

  unsigned int   m_networkPort;
  std::string    m_networkHosts1;
  std::string    m_networkHosts2;
  unsigned int   m_networkReloadTime;
  unsigned int   m_networkHangTime;
  std::string    m_networkStartup;
  bool           m_networkRevert;
  bool           m_networkDebug;

  bool         m_remoteCommandsEnabled;
  unsigned int m_remoteCommandsPort;
};

#endif
