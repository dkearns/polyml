/* config.h.in.  Generated from configure.ac by autoheader.  */


#ifndef CONF_H_INCLUDED
#define CONF_H_INCLUDED

/* Define to 1 if the `closedir' function returns void instead of `int'. */
#undef CLOSEDIR_VOID

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
#undef CRAY_STACKSEG_END

/* Define to 1 if using `alloca.c'. */
#undef C_ALLOCA

/* Define to the type of elements in the array set by `getgroups'. Usually
   this is either `int' or `gid_t'. */
#undef GETGROUPS_T

/* Define to 1 if the `getpgrp' function requires zero arguments. */
#undef GETPGRP_VOID

/* Define to 1 if you have `alloca', as a function or macro. */
#undef HAVE_ALLOCA
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#undef HAVE_ALLOCA_H

/* Define to 1 if you have the <assert.h> header file. */
#undef HAVE_ASSERT_H
#define HAVE_ASSERT_H 1

/* Define to 1 if you have the `bzero' function. */
#undef HAVE_BZERO

/* Define to 1 if your system has a working `chown' function. */
#undef HAVE_CHOWN

/* Define to 1 if you have the <ctype.h> header file. */
#undef HAVE_CTYPE_H
#define HAVE_CTYPE_H 1

/* Define to 1 if you have the <direct.h> header file. */
#undef HAVE_DIRECT_H
#define HAVE_DIRECT_H 1

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#undef HAVE_DIRENT_H

/* Define to 1 if you have the <dlfcn.h> header file. */
#undef HAVE_DLFCN_H

/* Define to 1 if you have the `dlopen' function. */
#undef HAVE_DLOPEN

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
#undef HAVE_DOPRNT

/* Define to 1 if you have the `dtoa' function. */
#undef HAVE_DTOA

/* Define to 1 if you have the `dup2' function. */
#undef HAVE_DUP2
#define HAVE_DUP2 1

/* Define to 1 if you have the <elf.h> header file. */
#undef HAVE_ELF_H

/* Define to 1 if you have the <errno.h> header file. */
#undef HAVE_ERRNO_H
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the <excpt.h> header file. */
#undef HAVE_EXCPT_H
#define HAVE_EXCPT_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#undef HAVE_FCNTL_H
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the <fenv.h> header file. */
#undef HAVE_FENV_H

/* Define to 1 if you have the <float.h> header file. */
#undef HAVE_FLOAT_H
#define HAVE_FLOAT_H 1

/* Define to 1 if you have the `floor' function. */
#undef HAVE_FLOOR
#define HAVE_FLOOR 1

/* Define to 1 if you have the `fork' function. */
#undef HAVE_FORK

/* Define to 1 if you have the <fpu_control.h> header file. */
#undef HAVE_FPU_CONTROL_H

/* Define to 1 if you have the `ftruncate' function. */
#undef HAVE_FTRUNCATE

/* Define to 1 if you have the `getcwd' function. */
#undef HAVE_GETCWD

/* Define to 1 if your system has a working `getgroups' function. */
#undef HAVE_GETGROUPS

/* Define to 1 if you have the `gethostbyaddr' function. */
#undef HAVE_GETHOSTBYADDR
#define HAVE_GETHOSTBYADDR 1

/* Define to 1 if you have the `gethostname' function. */
#undef HAVE_GETHOSTNAME
#define HAVE_GETHOSTNAME 1

/* Define to 1 if you have the `getpagesize' function. */
#undef HAVE_GETPAGESIZE

/* Define to 1 if you have the `getrusage' function. */
#undef HAVE_GETRUSAGE

/* Define to 1 if you have the `gettimeofday' function. */
#undef HAVE_GETTIMEOFDAY

/* Define to 1 if you have the <grp.h> header file. */
#undef HAVE_GRP_H

/* Define to 1 if the system has the type `IMAGE_FILE_HEADER'. */
#undef HAVE_IMAGE_FILE_HEADER
#define HAVE_IMAGE_FILE_HEADER 1

/* Define to 1 if you have the <ieeefp.h> header file. */
#undef HAVE_IEEEFP_H

/* Define to 1 if the system has the type `IMAGE_FILE_HEADER'. */
#undef HAVE_IMAGE_FILE_HEADER

/* Define to 1 if you have the <inttypes.h> header file. */
#undef HAVE_INTTYPES_H

/* Define to 1 if you have the <io.h> header file. */
#undef HAVE_IO_H
#define HAVE_IO_H 1

/* Define to 1 if you have the `dl' library (-ldl). */
#undef HAVE_LIBDL

/* Define to 1 if you have the `m' library (-lm). */
#undef HAVE_LIBM

/* Define to 1 if you have the `stdc++' library (-lstdc++). */
#undef HAVE_LIBSTDC__

/* Define to 1 if you have the `X11' library (-lX11). */
#undef HAVE_LIBX11

/* Define to 1 if you have the `Xext' library (-lXext). */
#undef HAVE_LIBXEXT

/* Define to 1 if you have the `Xm' library (-lXm). */
#undef HAVE_LIBXM

/* Define to 1 if you have the `Xt' library (-lXt). */
#undef HAVE_LIBXT

/* Define to 1 if you have the <limits.h> header file. */
#undef HAVE_LIMITS_H

/* Define to 1 if you have the <locale.h> header file. */
#undef HAVE_LOCALE_H
#define HAVE_LOCALE_H 1

/* Define to 1 if the system has the type `long long'. */
#undef HAVE_LONG_LONG

/* Define to 1 if `lstat' has the bug that it succeeds when given the
   zero-length file name argument. */
#undef HAVE_LSTAT_EMPTY_STRING_BUG

/* Define to 1 if you have the <mach-o/reloc.h> header file. */
#undef HAVE_MACH_O_RELOC_H

/* Define to 1 if you have the <malloc.h> header file. */
#undef HAVE_MALLOC_H
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the <math.h> header file. */
#undef HAVE_MATH_H
#define HAVE_MATH_H 1

/* Define to 1 if you have the `memmove' function. */
#undef HAVE_MEMMOVE
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the <memory.h> header file. */
#undef HAVE_MEMORY_H
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `memset' function. */
#undef HAVE_MEMSET
#define HAVE_MEMSET 1

/* Define to 1 if you have the `mkdir' function. */
#undef HAVE_MKDIR

/* Define to 1 if you have the `mkfifo' function. */
#undef HAVE_MKFIFO

/* Define to 1 if you have a working `mmap' system call. */
#undef HAVE_MMAP

/* Define to 1 if you have the `munmap' function. */
#undef HAVE_MUNMAP

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
#undef HAVE_NDIR_H

/* Define to 1 if you have the <netdb.h> header file. */
#undef HAVE_NETDB_H

/* Define to 1 if you have the <netinet/in.h> header file. */
#undef HAVE_NETINET_IN_H

/* Define to 1 if you have the <netinet/tcp.h> header file. */
#undef HAVE_NETINET_TCP_H

/* Define to 1 if you have the `pathconf' function. */
#undef HAVE_PATHCONF

/* Define to 1 if you have the PE/COFF types. */
#undef HAVE_PECOFF
#define HAVE_PECOFF 1

/* Define to 1 if you have the <poll.h> header file. */
#undef HAVE_POLL_H

/* Define to 1 if you have the `pow' function. */
#undef HAVE_POW

/* Define to 1 if you have the <pwd.h> header file. */
#undef HAVE_PWD_H

/* Define to 1 if your system has a GNU libc compatible `realloc' function,
   and to 0 otherwise. */
#undef HAVE_REALLOC

/* Define to 1 if you have the `realpath' function. */
#undef HAVE_REALPATH

/* Define to 1 if you have the `rmdir' function. */
#undef HAVE_RMDIR

/* Define to 1 if you have the `select' function. */
#undef HAVE_SELECT
#define HAVE_SELECT 1

/* Define to 1 if you have the <setjmp.h> header file. */
#undef HAVE_SETJMP_H
#define HAVE_SETJMP_H 1

/* Define to 1 if you have the `setlocale' function. */
#undef HAVE_SETLOCALE
#define HAVE_SETLOCALE 1

/* Define to 1 if you have the <siginfo.h> header file. */
#undef HAVE_SIGINFO_H

/* Define to 1 if you have the <signal.h> header file. */
#undef HAVE_SIGNAL_H
#define HAVE_SIGNAL_H 1

/* Define to 1 if you have the `sigsetmask' function. */
#undef HAVE_SIGSETMASK

/* Define to 1 if you have the `socket' function. */
#undef HAVE_SOCKET
#define HAVE_SOCKET 1

/* Define to 1 if you have the `sqrt' function. */
#undef HAVE_SQRT
#define HAVE_SQRT 1

/* Define to 1 if the system has the type `stack_t'. */
#undef HAVE_STACK_T

/* Define to 1 if `stat' has the bug that it succeeds when given the
   zero-length file name argument. */
#undef HAVE_STAT_EMPTY_STRING_BUG

/* Define to 1 if you have the <stdarg.h> header file. */
#undef HAVE_STDARG_H

/* Define to 1 if stdbool.h conforms to C99. */
#undef HAVE_STDBOOL_H

/* Define to 1 if you have the <stddef.h> header file. */
#undef HAVE_STDDEF_H
#define HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#undef HAVE_STDINT_H

/* Define to 1 if you have the <stdio.h> header file. */
#undef HAVE_STDIO_H
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#undef HAVE_STDLIB_H
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strdup' function. */
#undef HAVE_STRDUP
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strerror' function. */
#undef HAVE_STRERROR
#define HAVE_STRERROR 1

/* Define to 1 if you have the `strftime' function. */
#undef HAVE_STRFTIME
#define HAVE_STRFTIME 1

/* Define to 1 if you have the <strings.h> header file. */
#undef HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#undef HAVE_STRING_H
#define HAVE_STRING_H

/* Define to 1 if you have the `strtod' function. */
#undef HAVE_STRTOD
#define HAVE_STRTOD 1

/* Define to 1 if the system has the type `struct sigcontext'. */
#undef HAVE_STRUCT_SIGCONTEXT

/* Define to 1 if you have the `sysctl' function. */
#undef HAVE_SYSCTL

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
#undef HAVE_SYS_DIR_H

/* Define to 1 if you have the <sys/elf_386.h> header file. */
#undef HAVE_SYS_ELF_386_H

/* Define to 1 if you have the <sys/elf_SPARC.h> header file. */
#undef HAVE_SYS_ELF_SPARC_H

/* Define to 1 if you have the <sys/errno.h> header file. */
#undef HAVE_SYS_ERRNO_H

/* Define to 1 if you have the <sys/file.h> header file. */
#undef HAVE_SYS_FILE_H

/* Define to 1 if you have the <sys/filio.h> header file. */
#undef HAVE_SYS_FILIO_H

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#undef HAVE_SYS_IOCTL_H

/* Define to 1 if you have the <sys/mman.h> header file. */
#undef HAVE_SYS_MMAN_H

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
#undef HAVE_SYS_NDIR_H

/* Define to 1 if you have the <sys/param.h> header file. */
#undef HAVE_SYS_PARAM_H

/* Define to 1 if you have the <sys/resource.h> header file. */
#undef HAVE_SYS_RESOURCE_H

/* Define to 1 if you have the <sys/select.h> header file. */
#undef HAVE_SYS_SELECT_H

/* Define to 1 if you have the <sys/signal.h> header file. */
#undef HAVE_SYS_SIGNAL_H

/* Define to 1 if you have the <sys/socket.h> header file. */
#undef HAVE_SYS_SOCKET_H

/* Define to 1 if you have the <sys/sockio.h> header file. */
#undef HAVE_SYS_SOCKIO_H

/* Define to 1 if you have the <sys/stat.h> header file. */
#undef HAVE_SYS_STAT_H
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/sysctl.h> header file. */
#undef HAVE_SYS_SYSCTL_H

/* Define to 1 if you have the <sys/systeminfo.h> header file. */
#undef HAVE_SYS_SYSTEMINFO_H

/* Define to 1 if you have the <sys/termios.h> header file. */
#undef HAVE_SYS_TERMIOS_H

/* Define to 1 if you have the <sys/times.h> header file. */
#undef HAVE_SYS_TIMES_H

/* Define to 1 if you have the <sys/time.h> header file. */
#undef HAVE_SYS_TIME_H

/* Define to 1 if you have the <sys/types.h> header file. */
#undef HAVE_SYS_TYPES_H
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/uio.h> header file. */
#undef HAVE_SYS_UIO_H

/* Define to 1 if you have the <sys/un.h> header file. */
#undef HAVE_SYS_UN_H

/* Define to 1 if you have the <sys/utsname.h> header file. */
#undef HAVE_SYS_UTSNAME_H

/* Define to 1 if you have <sys/wait.h> that is POSIX.1 compatible. */
#undef HAVE_SYS_WAIT_H

/* Define to 1 if you have the <tchar.h> header file. */
#undef HAVE_TCHAR_H
#define HAVE_TCHAR_H 1

/* Define to 1 if you have the <time.h> header file. */
#undef HAVE_TIME_H
#define HAVE_TIME_H 1

/* Define to 1 if you have the <ucontext.h> header file. */
#undef HAVE_UCONTEXT_H

/* Define to 1 if the system has the type `ucontext_t'. */
#undef HAVE_UCONTEXT_T

/* Define to 1 if you have the `uname' function. */
#undef HAVE_UNAME

/* Define to 1 if you have the <unistd.h> header file. */
#undef HAVE_UNISTD_H

/* Define to 1 if you have the <values.h> header file. */
#undef HAVE_VALUES_H

/* Define to 1 if you have the `vfork' function. */
#undef HAVE_VFORK

/* Define to 1 if you have the <vfork.h> header file. */
#undef HAVE_VFORK_H

/* Define to 1 if you have the `vprintf' function. */
#undef HAVE_VPRINTF

/* Define to 1 if you have the <windows.h> header file. */
#undef HAVE_WINDOWS_H
#define HAVE_WINDOWS_H 1

/* Define to 1 if `fork' works. */
#undef HAVE_WORKING_FORK

/* Define to 1 if `vfork' works. */
#undef HAVE_WORKING_VFORK

/* Define to 1 if you have the <X11/Xlib.h> header file. */
#undef HAVE_X11_XLIB_H

/* Define to 1 if the system has the type `x86_thread_state32_t'. */
#undef HAVE_X86_THREAD_STATE32_T

/* Define to 1 if the system has the type `x86_thread_state64_t'. */
#undef HAVE_X86_THREAD_STATE64_T

/* Define to 1 if you have the <Xm/Xm.h> header file. */
#undef HAVE_XM_XM_H

/* Define to 1 if the system has the type `_Bool'. */
#undef HAVE__BOOL

/* Define to 1 if `lstat' dereferences a symlink specified with a trailing
   slash. */
#undef LSTAT_FOLLOWS_SLASHED_SYMLINK

/* Define to the address where bug reports for this package should be sent. */
#undef PACKAGE_BUGREPORT

/* Define to the full name of this package. */
#undef PACKAGE_NAME

/* Define to the full name and version of this package. */
#undef PACKAGE_STRING

/* Define to the one symbol short name of this package. */
#undef PACKAGE_TARNAME

/* Define to the version of this package. */
#undef PACKAGE_VERSION

/* Define to 1 if the C compiler supports function prototypes. */
#undef PROTOTYPES

/* Define as the return type of signal handlers (`int' or `void'). */
#undef RETSIGTYPE

/* Define to the type of arg 1 for `select'. */
#undef SELECT_TYPE_ARG1

/* Define to the type of args 2, 3 and 4 for `select'. */
#undef SELECT_TYPE_ARG234

/* Define to the type of arg 5 for `select'. */
#undef SELECT_TYPE_ARG5

/* Define to 1 if the `setvbuf' function takes the buffering type as its
   second argument and the buffer pointer as the third, as on System V before
   release 3. */
#undef SETVBUF_REVERSED

/* The size of a `long', as computed by sizeof. */
#undef SIZEOF_LONG
#define SIZEOF_LONG 4

/* The size of a `void*', as computed by sizeof. */
#undef SIZEOF_VOIDP
#define SIZEOF_VOIDP 4

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at run-time.
    STACK_DIRECTION > 0 => grows toward higher addresses
    STACK_DIRECTION < 0 => grows toward lower addresses
    STACK_DIRECTION = 0 => direction of growth unknown */
#undef STACK_DIRECTION

/* Define to 1 if you have the ANSI C header files. */
#undef STDC_HEADERS

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#undef TIME_WITH_SYS_TIME

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
#undef TM_IN_SYS_TIME

/* Define like PROTOTYPES; this can be used by system headers. */
#undef __PROTOTYPES

/* Define to empty if `const' does not conform to ANSI C. */
#undef const

/* Define to `int' if <sys/types.h> doesn't define. */
#undef gid_t

/* Define to rpl_malloc if the replacement function should be used. */
#undef malloc

/* Define to `int' if <sys/types.h> does not define. */
#undef mode_t

/* Define to `long' if <sys/types.h> does not define. */
#undef off_t

/* Define to `int' if <sys/types.h> does not define. */
#undef pid_t

/* Define to rpl_realloc if the replacement function should be used. */
#undef realloc

/* Define to `unsigned' if <sys/types.h> does not define. */
#undef size_t

/* Define to `int' if <sys/types.h> doesn't define. */
#undef uid_t

/* Define as `fork' if `vfork' does not work. */
#undef vfork


#endif