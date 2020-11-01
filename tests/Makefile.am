TESTS = dummy fixed
check_PROGRAMS = dummy fixed

CFLAGS = -I$(top_builddir)/src @CHECK_CFLAGS@
LDADD = $(top_builddir)/src/libnamegen.la @CHECK_LIBS@

.ts.c:
	checkmk $< > $@
