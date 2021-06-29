AM_CXXFLAGS = -Wall
AM_LDFLAGS = -Wl,-rpath -Wl,LIBDIR

ACLOCAL_AMFLAGS = -I m4

bin_PROGRAMS = drum-control-native

drum_control_native_CXXFLAGS = $(AM_CXXFLAGS) \
  $(tinyxml2_CFLAGS) $(exadrums_CFLAGS)  \
  -std=c++17
drum_control_native_LDADD = $(AM_LDADD) \
  -lstdc++fs \
   $(tinyxml2_LIBS) $(exadrums_LIBS) 

drum_control_native_SOURCES = src/main.cc
