AM_CXXFLAGS = -Wall
AM_LDFLAGS = -Wl,--as-needed

ACLOCAL_AMFLAGS = -I m4

PACKAGE = drum-control-native
bin_PROGRAMS = drum-control-native

drum_control_native_CXXFLAGS = $(AM_CXXFLAGS) \
  $(alsa_CFLAGS) $(tinyxml2_CFLAGS) $(exadrums_CFLAGS) \
  -std=c++17
drum_control_native_LDADD = $(AM_LDADD) \
  -lstdc++fs \
  $(alsa_LIBS) $(tinyxml2_LIBS) $(exadrums_LIBS)

drum_control_native_SOURCES = main.cc
