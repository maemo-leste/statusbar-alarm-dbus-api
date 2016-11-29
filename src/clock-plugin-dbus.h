/*
 * This file is part of statusbar-alarm-dbus-api package
 *
 * Copyright (C) 2009 Nokia Corporation. All rights reserved.
 *
 * Contact: Moises Martinez <moises.martinez@nokia.com>
 *
 * Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
 *
    * Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or 
other materials provided with the distribution.
    * Neither the name of Nokia Corporation nor the names of its contributors may be used to endorse or promote products derived from this software without 
specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
WARRANTIES OF
* MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, 
INCIDENTAL, SPECIAL,
* EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS 
INTERRUPTION) HOWEVER CAUSED
* AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS 
SOFTWARE, EVEN IF ADVISED OF
* THE POSSIBILITY OF SUCH DAMAGE.
*
*/

#ifndef __CLOCK_PLUGIN_DBUS_H__
#define __CLOCK_PLUGIN_DBUS_H__

/** \file clock-plugin-dbus.h
 * \brief Clock-statusbar dbus   header file.
 *
 * API for statusbar alarm - defines dbus interface variables.
 */

/** \brief dbus service for clock status area plugin. */
#define STATUSAREA_CLOCK_SERVICE         "com.nokia.clock.status_plugin"

/** \brief dbus path for clock status area plugin. */
#define STATUSAREA_CLOCK_PATH           "/com/nokia/clock/status_plugin"

/** \brief dbus interface for clock status area plugin. */
#define STATUSAREA_CLOCK_INTERFACE       "com.nokia.clock.status_plugin"

/**
 * This dbus method will be called by alarmd when the
 * number of alarms waiting to be triggered with
 * SHOW_ICON flag set changes from zero -> non-zero.
 */
#define STATUSAREA_CLOCK_ALARM_SET     "clock_sa_alarm_set"

/**
 * This dbus method will be called by alarmd when the
 * number of alarms waiting to be triggered with
 * SHOW_ICON flag set changes from non-zero -> zero.
 */
#define STATUSAREA_CLOCK_NO_ALARMS     "clock_sa_no_alarms"


#endif
