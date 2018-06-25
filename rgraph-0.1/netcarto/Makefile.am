# $LastChangedDate: 2007-10-26 17:05:23 -0500 (Fri, 26 Oct 2007) $
# $Revision: 96 $

INCLUDES = -I$(top_builddir) -I$(top_srcdir) \
	-I$(top_srcdir)/lib -I$(top_srcdir)/src
AM_LDFLAGS = -static

bin_PROGRAMS = netcarto netcarto_cl
netcarto_SOURCES = main_netcarto.c
netcarto_LDADD = $(top_srcdir)/src/librgraph.a $(top_srcdir)/lib/libgnu.la

netcarto_cl_SOURCES = main_netcarto_cl.c
netcarto_cl_LDADD = $(top_srcdir)/src/librgraph.a $(top_srcdir)/lib/libgnu.la

CLEANFILES = modules.clu modules.dat network.net node_prop.dat \
	randomized_mod.dat roles.clu roles.dat
EXTRA_DIST = testnet.dat
