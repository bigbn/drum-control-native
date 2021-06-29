AC_INIT([drum-control-native], [1], [bigbn@mail.ru])
AM_INIT_AUTOMAKE([-Wall -Werror foreign subdir-objects])

AC_CONFIG_SRCDIR([src/main.cc])                                                                                                                                                     

export PKG_CONFIG_PATH="/usr/local/lib/pkgconfig:${PKG_CONFIG_PATH}"

AC_PROG_CXX

AC_CONFIG_HEADERS([config.h])

PKG_PROG_PKG_CONFIG

PKG_CHECK_MODULES([alsa], [alsa])
PKG_CHECK_MODULES([tinyxml2], [tinyxml2])
PKG_CHECK_MODULES([exadrums], [exadrums])

AC_CONFIG_FILES([
    Makefile
    src/Makefile
])

#AM_SILENT_RULES([yes])

AC_OUTPUT