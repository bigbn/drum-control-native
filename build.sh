#!/bin/bash
set -e
make clean
rm drum-control-native || true
autoreconf
automake --add-missing
autoreconf
./configure
make