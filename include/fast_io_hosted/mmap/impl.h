#pragma once

#if defined(_WIN32) || defined(__CYGWIN__) || defined(__WINE__)
#include"win32_options.h"
#include"win32.h"
#endif

#if (!defined(_WIN32) || defined(__CYGWIN__) || defined(__WINE__) || defined(__BIONIC__)) && !defined(__MSDOS__) && !defined(_PICOLIBC)
#include"posix_options.h"
#include"posix.h"
#endif

#include"allocation_options.h"
