# -*- mode: makefile-gmake -*-

CC=            gcc
R=             R
CPPFLAGS =     `${R} CMD config --cppflags`
CFLAGS=        -g -Wall -DCSTACK_DEFNS -DRIF_HAS_RSIGHAND -DHAS_READLINE -fno-stack-protector
LDFLAGS=       `${R} CMD config --ldflags`
USE_SYSTEM_READLINE = 1
