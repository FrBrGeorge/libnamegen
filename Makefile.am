AM_CFLAGS = -Wall
lib_LTLIBRARIES = libnamegen.la
libnamegen_la_SOURCES = libnamegen.c
libnamegen_la_LDFLAGS = -version-info 0:0:0

bin_PROGRAMS=namegen
namegen_SOURCES = namegen.c
namegen_LDADD = libnamegen.la
