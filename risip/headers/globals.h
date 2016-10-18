/***********************************************************************************
**    Copyright (C) 2016  Petref Saraci
**    http://risip.io
**
**    This program is free software: you can redistribute it and/or modify
**    it under the terms of the GNU General Public License as published by
**    the Free Software Foundation, either version 3 of the License, or
**    (at your option) any later version.
**
**    This program is distributed in the hope that it will be useful,
**    but WITHOUT ANY WARRANTY; without even the implied warranty of
**    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**    GNU General Public License for more details.
**
**    You have received a copy of the GNU General Public License
**    along with this program. See LICENSE.GPLv3
**    A copy of the license can be found also here <http://www.gnu.org/licenses/>.
**
************************************************************************************/

#ifndef GLOBALS_H
#define GLOBALS_H

//#include <QtCore/qglobal.h>
//#if defined(QSYNC_LIBRARY)
//#  define QSYNC_EXPORT Q_DECL_EXPORT
//#else
//#  define QSYNC_EXPORT Q_DECL_IMPORT
//#endif

#include <QString>

struct RisipCurrencies {

    enum Currency {
        EUR = 1,
        USD,
        LEK,
        Unknown = 1
    };
};

struct RisipSettingsParam {

    static const char *QmlUri;

    static const QString FirstRun;
    static const QString DefaultAccount;
    static const QString AutoSignIn;

    static const QString AccountGroup;
    static const QString TotalAccounts;
    static const QString Uri;
    static const QString Username;
    static const QString Password;
    static const QString ServerAddress;
    static const QString NetworkType;
    static const QString Scheme;
    static const QString ProxyServer;
    static const QString LocalPort;
    static const QString RandomLocalPort;
};

#endif // GLOBALS_H
