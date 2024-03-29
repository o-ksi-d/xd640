
AC_PREREQ(2.13)
AC_INIT(Xutf8.h.in)

AC_CONFIG_MACRO_DIRS([m4])


AM_INIT_AUTOMAKE(libXutf8, 1.0.0)

XUTF_MAJOR_VERSION=1
XUTF_MINOR_VERSION=0
XUTF_MICRO_VERSION=0
XUTF_INTERFACE_AGE=0
XUTF_BINARY_AGE=0


# libtool versioning
LT_RELEASE=$XUTF_MAJOR_VERSION.$XUTF_MINOR_VERSION
LT_CURRENT=`expr $XUTF_MICRO_VERSION - $XUTF_INTERFACE_AGE`
LT_REVISION=$XUTF_INTERFACE_AGE
LT_AGE=`expr $XUTF_BINARY_AGE - $XUTF_INTERFACE_AGE`
AC_SUBST(LT_RELEASE)
AC_SUBST(LT_CURRENT)
AC_SUBST(LT_REVISION)
AC_SUBST(LT_AGE)

# For automake.
VERSION=$XUTF_MAJOR_VERSION.$XUTF_MINOR_VERSION.$XUTF_MICRO_VERSION
PACKAGE=libXutf8

dnl Initialize automake stuff
AM_INIT_AUTOMAKE($PACKAGE, $VERSION, no-define)

# Specify a configuration file
AM_CONFIG_HEADER(config.h)

AM_PROG_LIBTOOL

AM_MAINTAINER_MODE

AC_PROG_CC


AC_PROG_INSTALL
AC_PROG_LN_S
AC_PROG_RANLIB
AC_ISC_POSIX

AC_HEADER_STDC
AC_CHECK_HEADERS(unistd.h)
        dnl Check for X11...

	AC_PATH_XTRA
        if test x$no_x = xyes; then
            AC_MSG_ERROR(Configure could not find required X11 libraries, aborting.)
        fi

        if test "x$X_PRE_LIBS" != x; then
            AC_MSG_WARN(Ignoring libraries \"$X_PRE_LIBS\" requested by configure.)
        fi

        LIBS="$LIBS -lXext -lX11 $X_EXTRA_LIBS"
        CFLAGS="$CFLAGS$X_CFLAGS"
        CXXFLAGS="$CXXFLAGS$X_CFLAGS"
        LDFLAGS="$X_LIBS $LDFLAGS"

        if test "x$x_includes" != x; then
            ac_cpp="$ac_cpp -I$x_includes"
        fi


AC_CHECK_LIB(X11, Xutf8DrawString,  ,)

HAVE_LIBC_ICONV=0
AC_CHECK_LIB(c, iconv, \
 
       HAVE_LIBC_ICONV=1 ,)

AC_SUBST(HAVE_LIBC_ICONV)

AC_OUTPUT(Makefile Xutf8.h)

