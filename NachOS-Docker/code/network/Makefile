# NOTE: this is a GNU Makefile.  You must use "gmake" rather than "make".
#
# Makefile for the network assignment
#    Defines set up assuming this assignment is done last 
#    If not, use the "bare bones"  defines below. 
#
# Copyright (c) 1992 The Regents of the University of California.
# All rights reserved.  See copyright.h for copyright notice and limitation 
# of liability and disclaimer of warranty provisions.

DEFINES = -DTHREADS -DUSER_PROGRAM -DFILESYS_NEEDED -DFILESYS -DNETWORK
INCPATH = -I../network -I../bin -I../filesys -I../userprog -I../threads -I../machine -I../lib
HFILES = $(THREAD_H) $(USERPROG_H) $(VM_H) $(FILESYS_H) $(NETWORK_H)
CFILES = $(THREAD_C) $(USERPROG_C) $(VM_C) $(FILESYS_C) $(NETWORK_C)
C_OFILES = $(THREAD_O) $(USERPROG_O) $(VM_O) $(FILESYS_O) $(NETWORK_O)

# bare bones version
# DEFINES =-DNETWORK
# INCPATH = -I../network -I../threads -I../machine -I../lib
# HFILES = $(THREAD_H) $(NETWORK_H)
# CFILES = $(THREAD_C) $(NETWORK_C)
# C_OFILES = $(THREAD_O) $(NETWORK_O)

include ../Makefile.common
include ../Makefile.dep
#-----------------------------------------------------------------
# DO NOT DELETE THIS LINE -- make depend uses it
# DEPENDENCIES MUST END AT END OF FILE
bitmap.o: ../lib/bitmap.cc /usr/include/stdc-predef.h ../lib/copyright.h \
 ../lib/debug.h ../lib/utility.h ../lib/sysdep.h \
 /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h ../lib/bitmap.h
debug.o: ../lib/debug.cc /usr/include/stdc-predef.h ../lib/copyright.h \
 ../lib/utility.h ../lib/debug.h ../lib/sysdep.h \
 /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h
hash.o: ../lib/hash.cc /usr/include/stdc-predef.h ../lib/copyright.h
libtest.o: ../lib/libtest.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../lib/libtest.h ../lib/bitmap.h ../lib/utility.h \
 ../lib/list.h ../lib/debug.h ../lib/sysdep.h \
 /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h ../lib/list.cc \
 ../lib/hash.h ../lib/hash.cc
list.o: ../lib/list.cc /usr/include/stdc-predef.h ../lib/copyright.h
sysdep.o: ../lib/sysdep.cc /usr/include/stdc-predef.h ../lib/copyright.h \
 ../lib/debug.h ../lib/utility.h ../lib/sysdep.h \
 /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h /usr/include/unistd.h \
 /usr/include/x86_64-linux-gnu/bits/posix_opt.h \
 /usr/include/x86_64-linux-gnu/bits/environments.h \
 /usr/include/x86_64-linux-gnu/bits/confname.h \
 /usr/include/x86_64-linux-gnu/bits/getopt_posix.h \
 /usr/include/x86_64-linux-gnu/bits/getopt_core.h \
 /usr/include/x86_64-linux-gnu/bits/unistd_ext.h \
 /usr/include/linux/close_range.h \
 /usr/include/x86_64-linux-gnu/sys/time.h \
 /usr/include/x86_64-linux-gnu/sys/file.h /usr/include/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_iovec.h \
 /usr/include/linux/falloc.h /usr/include/x86_64-linux-gnu/bits/stat.h \
 /usr/include/x86_64-linux-gnu/bits/struct_stat.h \
 /usr/include/x86_64-linux-gnu/sys/socket.h \
 /usr/include/x86_64-linux-gnu/bits/socket.h \
 /usr/include/x86_64-linux-gnu/bits/socket_type.h \
 /usr/include/x86_64-linux-gnu/bits/sockaddr.h \
 /usr/include/x86_64-linux-gnu/asm/socket.h \
 /usr/include/asm-generic/socket.h /usr/include/linux/posix_types.h \
 /usr/include/linux/stddef.h \
 /usr/include/x86_64-linux-gnu/asm/posix_types.h \
 /usr/include/x86_64-linux-gnu/asm/posix_types_64.h \
 /usr/include/asm-generic/posix_types.h \
 /usr/include/x86_64-linux-gnu/asm/bitsperlong.h \
 /usr/include/asm-generic/bitsperlong.h \
 /usr/include/x86_64-linux-gnu/asm/sockios.h \
 /usr/include/asm-generic/sockios.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_osockaddr.h \
 /usr/include/x86_64-linux-gnu/sys/un.h /usr/include/signal.h \
 /usr/include/x86_64-linux-gnu/bits/signum-generic.h \
 /usr/include/x86_64-linux-gnu/bits/signum-arch.h \
 /usr/include/x86_64-linux-gnu/bits/types/sig_atomic_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigval_t.h \
 /usr/include/x86_64-linux-gnu/bits/siginfo-arch.h \
 /usr/include/x86_64-linux-gnu/bits/siginfo-consts.h \
 /usr/include/x86_64-linux-gnu/bits/siginfo-consts-arch.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigval_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigevent_t.h \
 /usr/include/x86_64-linux-gnu/bits/sigevent-consts.h \
 /usr/include/x86_64-linux-gnu/bits/sigaction.h \
 /usr/include/x86_64-linux-gnu/bits/sigcontext.h \
 /usr/include/x86_64-linux-gnu/bits/types/stack_t.h \
 /usr/include/x86_64-linux-gnu/sys/ucontext.h \
 /usr/include/x86_64-linux-gnu/bits/sigstack.h \
 /usr/include/x86_64-linux-gnu/bits/sigstksz.h \
 /usr/include/x86_64-linux-gnu/bits/ss_flags.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sigstack.h \
 /usr/include/x86_64-linux-gnu/bits/sigthread.h \
 /usr/include/x86_64-linux-gnu/bits/signal_ext.h
interrupt.o: ../machine/interrupt.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../machine/interrupt.h ../lib/list.h \
 ../lib/copyright.h ../lib/debug.h ../lib/utility.h ../lib/sysdep.h \
 /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h ../lib/list.cc \
 ../machine/callback.h ../threads/main.h ../lib/debug.h \
 ../network/netkernel.h ../userprog/userkernel.h ../threads/kernel.h \
 ../lib/utility.h ../threads/thread.h ../lib/sysdep.h \
 ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
 /usr/include/c++/11/list /usr/include/c++/11/bits/stl_list.h \
 /usr/include/c++/11/bits/allocated_ptr.h \
 /usr/include/c++/11/ext/aligned_buffer.h \
 /usr/include/c++/11/bits/list.tcc ../machine/interrupt.h \
 ../machine/stats.h ../threads/alarm.h ../machine/callback.h \
 ../machine/timer.h ../filesys/synchdisk.h ../machine/disk.h \
 ../threads/synch.h ../threads/main.h
stats.o: ../machine/stats.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../lib/debug.h ../lib/copyright.h ../lib/utility.h \
 ../lib/sysdep.h /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h ../machine/stats.h
timer.o: ../machine/timer.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../machine/timer.h ../lib/utility.h \
 ../lib/copyright.h ../machine/callback.h ../threads/main.h \
 ../lib/debug.h ../lib/utility.h ../lib/sysdep.h \
 /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h ../network/netkernel.h \
 ../userprog/userkernel.h ../threads/kernel.h ../threads/thread.h \
 ../lib/sysdep.h ../machine/machine.h ../machine/translate.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../lib/list.h ../lib/debug.h ../lib/list.cc \
 /usr/include/c++/11/list /usr/include/c++/11/bits/stl_list.h \
 /usr/include/c++/11/bits/allocated_ptr.h \
 /usr/include/c++/11/ext/aligned_buffer.h \
 /usr/include/c++/11/bits/list.tcc ../machine/interrupt.h \
 ../machine/stats.h ../threads/alarm.h ../machine/callback.h \
 ../machine/timer.h ../filesys/synchdisk.h ../machine/disk.h \
 ../threads/synch.h ../threads/main.h
alarm.o: ../threads/alarm.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../threads/alarm.h ../lib/utility.h \
 ../lib/copyright.h ../machine/callback.h ../machine/timer.h \
 ../machine/callback.h ../threads/scheduler.h ../lib/list.h \
 ../lib/debug.h ../lib/utility.h ../lib/sysdep.h \
 /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h ../lib/list.cc \
 ../threads/thread.h ../lib/sysdep.h ../machine/machine.h \
 ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h /usr/include/c++/11/list \
 /usr/include/c++/11/bits/stl_list.h \
 /usr/include/c++/11/bits/allocated_ptr.h \
 /usr/include/c++/11/ext/aligned_buffer.h \
 /usr/include/c++/11/bits/list.tcc ../threads/main.h ../lib/debug.h \
 ../network/netkernel.h ../userprog/userkernel.h ../threads/kernel.h \
 ../machine/interrupt.h ../machine/stats.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h
kernel.o: ../threads/kernel.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../lib/debug.h ../lib/copyright.h ../lib/utility.h \
 ../lib/sysdep.h /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h ../threads/main.h \
 ../network/netkernel.h ../userprog/userkernel.h ../threads/kernel.h \
 ../lib/utility.h ../threads/thread.h ../lib/sysdep.h \
 ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
 ../lib/list.h ../lib/debug.h ../lib/list.cc /usr/include/c++/11/list \
 /usr/include/c++/11/bits/stl_list.h \
 /usr/include/c++/11/bits/allocated_ptr.h \
 /usr/include/c++/11/ext/aligned_buffer.h \
 /usr/include/c++/11/bits/list.tcc ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h ../threads/kernel.h \
 ../threads/synch.h ../threads/synchlist.h ../threads/synchlist.cc \
 ../lib/libtest.h ../machine/elevatortest.h
main.o: ../threads/main.cc /usr/include/stdc-predef.h ../lib/copyright.h \
 ../threads/main.h ../lib/debug.h ../lib/copyright.h ../lib/utility.h \
 ../lib/sysdep.h /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h ../network/netkernel.h \
 ../userprog/userkernel.h ../threads/kernel.h ../lib/utility.h \
 ../threads/thread.h ../lib/sysdep.h ../machine/machine.h \
 ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/scheduler.h ../lib/list.h \
 ../lib/debug.h ../lib/list.cc /usr/include/c++/11/list \
 /usr/include/c++/11/bits/stl_list.h \
 /usr/include/c++/11/bits/allocated_ptr.h \
 /usr/include/c++/11/ext/aligned_buffer.h \
 /usr/include/c++/11/bits/list.tcc ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h
scheduler.o: ../threads/scheduler.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../lib/debug.h ../lib/copyright.h ../lib/utility.h \
 ../lib/sysdep.h /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h ../threads/scheduler.h \
 ../lib/list.h ../lib/debug.h ../lib/list.cc ../threads/thread.h \
 ../lib/utility.h ../lib/sysdep.h ../machine/machine.h \
 ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h /usr/include/c++/11/list \
 /usr/include/c++/11/bits/stl_list.h \
 /usr/include/c++/11/bits/allocated_ptr.h \
 /usr/include/c++/11/ext/aligned_buffer.h \
 /usr/include/c++/11/bits/list.tcc ../threads/main.h \
 ../network/netkernel.h ../userprog/userkernel.h ../threads/kernel.h \
 ../machine/interrupt.h ../machine/callback.h ../machine/stats.h \
 ../threads/alarm.h ../machine/callback.h ../machine/timer.h \
 ../filesys/synchdisk.h ../machine/disk.h ../threads/synch.h
synch.o: ../threads/synch.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../threads/synch.h ../threads/thread.h \
 ../lib/utility.h ../lib/copyright.h ../lib/sysdep.h \
 /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h ../machine/machine.h \
 ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../lib/list.h ../lib/debug.h ../lib/utility.h \
 ../lib/sysdep.h ../lib/list.cc ../threads/main.h ../lib/debug.h \
 ../network/netkernel.h ../userprog/userkernel.h ../threads/kernel.h \
 ../threads/scheduler.h /usr/include/c++/11/list \
 /usr/include/c++/11/bits/stl_list.h \
 /usr/include/c++/11/bits/allocated_ptr.h \
 /usr/include/c++/11/ext/aligned_buffer.h \
 /usr/include/c++/11/bits/list.tcc ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h
synchlist.o: ../threads/synchlist.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../threads/synchlist.h ../lib/list.h \
 ../lib/copyright.h ../lib/debug.h ../lib/utility.h ../lib/sysdep.h \
 /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h ../lib/list.cc \
 ../threads/synch.h ../threads/thread.h ../lib/utility.h ../lib/sysdep.h \
 ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/main.h \
 ../lib/debug.h ../network/netkernel.h ../userprog/userkernel.h \
 ../threads/kernel.h ../threads/scheduler.h /usr/include/c++/11/list \
 /usr/include/c++/11/bits/stl_list.h \
 /usr/include/c++/11/bits/allocated_ptr.h \
 /usr/include/c++/11/ext/aligned_buffer.h \
 /usr/include/c++/11/bits/list.tcc ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h ../threads/synchlist.cc
thread.o: ../threads/thread.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../threads/thread.h ../lib/utility.h \
 ../lib/copyright.h ../lib/sysdep.h /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h ../machine/machine.h \
 ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/switch.h ../threads/synch.h \
 ../lib/list.h ../lib/debug.h ../lib/utility.h ../lib/sysdep.h \
 ../lib/list.cc ../threads/main.h ../lib/debug.h ../network/netkernel.h \
 ../userprog/userkernel.h ../threads/kernel.h ../threads/scheduler.h \
 /usr/include/c++/11/list /usr/include/c++/11/bits/stl_list.h \
 /usr/include/c++/11/bits/allocated_ptr.h \
 /usr/include/c++/11/ext/aligned_buffer.h \
 /usr/include/c++/11/bits/list.tcc ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h
elevatortest.o: ../machine/elevatortest.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../machine/elevatortest.h ../machine/elevator.h \
 ../lib/utility.h ../lib/copyright.h ../machine/callback.h ../lib/list.h \
 ../lib/debug.h ../lib/utility.h ../lib/sysdep.h \
 /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h ../lib/list.cc \
 ../threads/synch.h ../threads/thread.h ../lib/sysdep.h \
 ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/main.h \
 ../lib/debug.h ../network/netkernel.h ../userprog/userkernel.h \
 ../threads/kernel.h ../threads/scheduler.h /usr/include/c++/11/list \
 /usr/include/c++/11/bits/stl_list.h \
 /usr/include/c++/11/bits/allocated_ptr.h \
 /usr/include/c++/11/ext/aligned_buffer.h \
 /usr/include/c++/11/bits/list.tcc ../machine/interrupt.h \
 ../machine/stats.h ../threads/alarm.h ../machine/callback.h \
 ../machine/timer.h ../filesys/synchdisk.h ../machine/disk.h \
 ../threads/thread.h
elevator.o: ../machine/elevator.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../machine/elevator.h ../lib/utility.h \
 ../lib/copyright.h ../machine/callback.h ../lib/list.h ../lib/debug.h \
 ../lib/utility.h ../lib/sysdep.h /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h ../lib/list.cc \
 ../threads/kernel.h ../lib/debug.h ../threads/thread.h ../lib/sysdep.h \
 ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
 /usr/include/c++/11/list /usr/include/c++/11/bits/stl_list.h \
 /usr/include/c++/11/bits/allocated_ptr.h \
 /usr/include/c++/11/ext/aligned_buffer.h \
 /usr/include/c++/11/bits/list.tcc ../machine/interrupt.h \
 ../machine/stats.h ../threads/alarm.h ../machine/callback.h \
 ../machine/timer.h ../threads/main.h ../network/netkernel.h \
 ../userprog/userkernel.h ../filesys/synchdisk.h ../machine/disk.h \
 ../threads/synch.h ../threads/main.h
addrspace.o: ../userprog/addrspace.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../threads/main.h ../lib/debug.h ../lib/copyright.h \
 ../lib/utility.h ../lib/sysdep.h /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h ../network/netkernel.h \
 ../userprog/userkernel.h ../threads/kernel.h ../lib/utility.h \
 ../threads/thread.h ../lib/sysdep.h ../machine/machine.h \
 ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/scheduler.h ../lib/list.h \
 ../lib/debug.h ../lib/list.cc /usr/include/c++/11/list \
 /usr/include/c++/11/bits/stl_list.h \
 /usr/include/c++/11/bits/allocated_ptr.h \
 /usr/include/c++/11/ext/aligned_buffer.h \
 /usr/include/c++/11/bits/list.tcc ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h ../threads/main.h \
 ../userprog/addrspace.h ../bin/noff.h
exception.o: ../userprog/exception.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../threads/main.h ../lib/debug.h ../lib/copyright.h \
 ../lib/utility.h ../lib/sysdep.h /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h ../network/netkernel.h \
 ../userprog/userkernel.h ../threads/kernel.h ../lib/utility.h \
 ../threads/thread.h ../lib/sysdep.h ../machine/machine.h \
 ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/scheduler.h ../lib/list.h \
 ../lib/debug.h ../lib/list.cc /usr/include/c++/11/list \
 /usr/include/c++/11/bits/stl_list.h \
 /usr/include/c++/11/bits/allocated_ptr.h \
 /usr/include/c++/11/ext/aligned_buffer.h \
 /usr/include/c++/11/bits/list.tcc ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h ../threads/main.h \
 ../userprog/syscall.h
synchconsole.o: ../userprog/synchconsole.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../userprog/synchconsole.h ../lib/utility.h \
 ../lib/copyright.h ../machine/callback.h ../machine/console.h \
 ../machine/callback.h ../threads/synch.h ../threads/thread.h \
 ../lib/sysdep.h /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h ../machine/machine.h \
 ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../lib/list.h ../lib/debug.h ../lib/utility.h \
 ../lib/sysdep.h ../lib/list.cc ../threads/main.h ../lib/debug.h \
 ../network/netkernel.h ../userprog/userkernel.h ../threads/kernel.h \
 ../threads/scheduler.h /usr/include/c++/11/list \
 /usr/include/c++/11/bits/stl_list.h \
 /usr/include/c++/11/bits/allocated_ptr.h \
 /usr/include/c++/11/ext/aligned_buffer.h \
 /usr/include/c++/11/bits/list.tcc ../machine/interrupt.h \
 ../machine/stats.h ../threads/alarm.h ../machine/timer.h \
 ../filesys/synchdisk.h ../machine/disk.h
userkernel.o: ../userprog/userkernel.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../userprog/synchconsole.h ../lib/utility.h \
 ../lib/copyright.h ../machine/callback.h ../machine/console.h \
 ../machine/callback.h ../threads/synch.h ../threads/thread.h \
 ../lib/sysdep.h /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h ../machine/machine.h \
 ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../lib/list.h ../lib/debug.h ../lib/utility.h \
 ../lib/sysdep.h ../lib/list.cc ../threads/main.h ../lib/debug.h \
 ../network/netkernel.h ../userprog/userkernel.h ../threads/kernel.h \
 ../threads/scheduler.h /usr/include/c++/11/list \
 /usr/include/c++/11/bits/stl_list.h \
 /usr/include/c++/11/bits/allocated_ptr.h \
 /usr/include/c++/11/ext/aligned_buffer.h \
 /usr/include/c++/11/bits/list.tcc ../machine/interrupt.h \
 ../machine/stats.h ../threads/alarm.h ../machine/timer.h \
 ../filesys/synchdisk.h ../machine/disk.h ../userprog/userkernel.h
console.o: ../machine/console.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../machine/console.h ../lib/utility.h \
 ../lib/copyright.h ../machine/callback.h ../threads/main.h \
 ../lib/debug.h ../lib/utility.h ../lib/sysdep.h \
 /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h ../network/netkernel.h \
 ../userprog/userkernel.h ../threads/kernel.h ../threads/thread.h \
 ../lib/sysdep.h ../machine/machine.h ../machine/translate.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../lib/list.h ../lib/debug.h ../lib/list.cc \
 /usr/include/c++/11/list /usr/include/c++/11/bits/stl_list.h \
 /usr/include/c++/11/bits/allocated_ptr.h \
 /usr/include/c++/11/ext/aligned_buffer.h \
 /usr/include/c++/11/bits/list.tcc ../machine/interrupt.h \
 ../machine/stats.h ../threads/alarm.h ../machine/callback.h \
 ../machine/timer.h ../filesys/synchdisk.h ../machine/disk.h \
 ../threads/synch.h ../threads/main.h
machine.o: ../machine/machine.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../machine/machine.h ../lib/utility.h \
 ../lib/copyright.h ../machine/translate.h ../threads/main.h \
 ../lib/debug.h ../lib/utility.h ../lib/sysdep.h \
 /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h ../network/netkernel.h \
 ../userprog/userkernel.h ../threads/kernel.h ../threads/thread.h \
 ../lib/sysdep.h ../machine/machine.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
 ../lib/list.h ../lib/debug.h ../lib/list.cc /usr/include/c++/11/list \
 /usr/include/c++/11/bits/stl_list.h \
 /usr/include/c++/11/bits/allocated_ptr.h \
 /usr/include/c++/11/ext/aligned_buffer.h \
 /usr/include/c++/11/bits/list.tcc ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h ../threads/main.h
mipssim.o: ../machine/mipssim.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../lib/debug.h ../lib/copyright.h ../lib/utility.h \
 ../lib/sysdep.h /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h ../machine/machine.h \
 ../lib/utility.h ../machine/translate.h ../machine/mipssim.h \
 ../threads/main.h ../network/netkernel.h ../userprog/userkernel.h \
 ../threads/kernel.h ../threads/thread.h ../lib/sysdep.h \
 ../machine/machine.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/scheduler.h ../lib/list.h \
 ../lib/debug.h ../lib/list.cc /usr/include/c++/11/list \
 /usr/include/c++/11/bits/stl_list.h \
 /usr/include/c++/11/bits/allocated_ptr.h \
 /usr/include/c++/11/ext/aligned_buffer.h \
 /usr/include/c++/11/bits/list.tcc ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h ../threads/main.h
translate.o: ../machine/translate.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../threads/main.h ../lib/debug.h ../lib/copyright.h \
 ../lib/utility.h ../lib/sysdep.h /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h ../network/netkernel.h \
 ../userprog/userkernel.h ../threads/kernel.h ../lib/utility.h \
 ../threads/thread.h ../lib/sysdep.h ../machine/machine.h \
 ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/scheduler.h ../lib/list.h \
 ../lib/debug.h ../lib/list.cc /usr/include/c++/11/list \
 /usr/include/c++/11/bits/stl_list.h \
 /usr/include/c++/11/bits/allocated_ptr.h \
 /usr/include/c++/11/ext/aligned_buffer.h \
 /usr/include/c++/11/bits/list.tcc ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h ../threads/main.h
synchdisk.o: ../filesys/synchdisk.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../filesys/synchdisk.h ../machine/disk.h \
 ../lib/utility.h ../lib/copyright.h ../machine/callback.h \
 ../threads/synch.h ../threads/thread.h ../lib/sysdep.h \
 /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h ../machine/machine.h \
 ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../lib/list.h ../lib/debug.h ../lib/utility.h \
 ../lib/sysdep.h ../lib/list.cc ../threads/main.h ../lib/debug.h \
 ../network/netkernel.h ../userprog/userkernel.h ../threads/kernel.h \
 ../threads/scheduler.h /usr/include/c++/11/list \
 /usr/include/c++/11/bits/stl_list.h \
 /usr/include/c++/11/bits/allocated_ptr.h \
 /usr/include/c++/11/ext/aligned_buffer.h \
 /usr/include/c++/11/bits/list.tcc ../machine/interrupt.h \
 ../machine/stats.h ../threads/alarm.h ../machine/callback.h \
 ../machine/timer.h ../filesys/synchdisk.h
disk.o: ../machine/disk.cc /usr/include/stdc-predef.h ../lib/copyright.h \
 ../machine/disk.h ../lib/utility.h ../lib/copyright.h \
 ../machine/callback.h ../threads/main.h ../lib/debug.h ../lib/utility.h \
 ../lib/sysdep.h /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h ../network/netkernel.h \
 ../userprog/userkernel.h ../threads/kernel.h ../threads/thread.h \
 ../lib/sysdep.h ../machine/machine.h ../machine/translate.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../lib/list.h ../lib/debug.h ../lib/list.cc \
 /usr/include/c++/11/list /usr/include/c++/11/bits/stl_list.h \
 /usr/include/c++/11/bits/allocated_ptr.h \
 /usr/include/c++/11/ext/aligned_buffer.h \
 /usr/include/c++/11/bits/list.tcc ../machine/interrupt.h \
 ../machine/stats.h ../threads/alarm.h ../machine/callback.h \
 ../machine/timer.h ../filesys/synchdisk.h ../machine/disk.h \
 ../threads/synch.h ../threads/main.h
directory.o: ../filesys/directory.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../lib/utility.h ../lib/copyright.h \
 ../filesys/filehdr.h ../machine/disk.h ../machine/callback.h \
 ../lib/bitmap.h ../lib/utility.h ../filesys/directory.h \
 ../filesys/openfile.h /usr/include/stdio.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h /usr/include/string.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/strings.h
filesys.o: ../filesys/filesys.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../machine/disk.h ../lib/utility.h ../lib/copyright.h \
 ../machine/callback.h ../lib/bitmap.h ../lib/utility.h \
 ../filesys/directory.h ../filesys/openfile.h ../filesys/filehdr.h \
 ../filesys/filesys.h ../lib/debug.h ../lib/sysdep.h \
 /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h ../filesys/pbitmap.h
openfile.o: ../filesys/openfile.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../filesys/filehdr.h ../machine/disk.h \
 ../lib/utility.h ../lib/copyright.h ../machine/callback.h \
 ../lib/bitmap.h ../lib/utility.h ../filesys/openfile.h ../lib/debug.h \
 ../lib/sysdep.h /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h ../threads/main.h \
 ../network/netkernel.h ../userprog/userkernel.h ../threads/kernel.h \
 ../threads/thread.h ../lib/sysdep.h ../machine/machine.h \
 ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../threads/scheduler.h ../lib/list.h ../lib/debug.h ../lib/list.cc \
 /usr/include/c++/11/list /usr/include/c++/11/bits/stl_list.h \
 /usr/include/c++/11/bits/allocated_ptr.h \
 /usr/include/c++/11/ext/aligned_buffer.h \
 /usr/include/c++/11/bits/list.tcc ../machine/interrupt.h \
 ../machine/stats.h ../threads/alarm.h ../machine/callback.h \
 ../machine/timer.h ../filesys/synchdisk.h ../threads/synch.h \
 ../threads/main.h
filehdr.o: ../filesys/filehdr.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../lib/debug.h ../lib/copyright.h ../lib/utility.h \
 ../lib/sysdep.h /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h ../threads/main.h \
 ../network/netkernel.h ../userprog/userkernel.h ../threads/kernel.h \
 ../lib/utility.h ../threads/thread.h ../lib/sysdep.h \
 ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
 ../lib/list.h ../lib/debug.h ../lib/list.cc /usr/include/c++/11/list \
 /usr/include/c++/11/bits/stl_list.h \
 /usr/include/c++/11/bits/allocated_ptr.h \
 /usr/include/c++/11/ext/aligned_buffer.h \
 /usr/include/c++/11/bits/list.tcc ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h ../threads/main.h \
 ../filesys/filehdr.h ../lib/bitmap.h
fstest.o: ../filesys/fstest.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../lib/debug.h ../lib/copyright.h ../lib/utility.h \
 ../lib/sysdep.h /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h ../lib/utility.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/main.h \
 ../network/netkernel.h ../userprog/userkernel.h ../threads/kernel.h \
 ../threads/thread.h ../lib/sysdep.h ../machine/machine.h \
 ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../threads/scheduler.h ../lib/list.h ../lib/debug.h ../lib/list.cc \
 /usr/include/c++/11/list /usr/include/c++/11/bits/stl_list.h \
 /usr/include/c++/11/bits/allocated_ptr.h \
 /usr/include/c++/11/ext/aligned_buffer.h \
 /usr/include/c++/11/bits/list.tcc ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h ../threads/main.h \
 ../threads/thread.h
pbitmap.o: ../filesys/pbitmap.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../filesys/pbitmap.h ../lib/bitmap.h \
 ../lib/copyright.h ../lib/utility.h ../filesys/openfile.h \
 ../lib/utility.h
netkernel.o: ../network/netkernel.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../network/netkernel.h ../userprog/userkernel.h \
 ../threads/kernel.h ../lib/debug.h ../lib/copyright.h ../lib/utility.h \
 ../lib/sysdep.h /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h ../lib/utility.h \
 ../threads/thread.h ../lib/sysdep.h ../machine/machine.h \
 ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/scheduler.h ../lib/list.h \
 ../lib/debug.h ../lib/list.cc /usr/include/c++/11/list \
 /usr/include/c++/11/bits/stl_list.h \
 /usr/include/c++/11/bits/allocated_ptr.h \
 /usr/include/c++/11/ext/aligned_buffer.h \
 /usr/include/c++/11/bits/list.tcc ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h ../threads/main.h \
 ../network/netkernel.h ../network/post.h ../machine/network.h \
 ../threads/synchlist.h ../threads/synch.h ../threads/synchlist.cc \
 ../threads/synchlist.h
post.o: ../network/post.cc /usr/include/stdc-predef.h ../lib/copyright.h \
 ../network/post.h ../lib/utility.h ../lib/copyright.h \
 ../machine/callback.h ../machine/network.h ../machine/callback.h \
 ../threads/synchlist.h ../lib/list.h ../lib/debug.h ../lib/utility.h \
 ../lib/sysdep.h /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h ../lib/list.cc \
 ../threads/synch.h ../threads/thread.h ../lib/sysdep.h \
 ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/main.h \
 ../lib/debug.h ../network/netkernel.h ../userprog/userkernel.h \
 ../threads/kernel.h ../threads/scheduler.h /usr/include/c++/11/list \
 /usr/include/c++/11/bits/stl_list.h \
 /usr/include/c++/11/bits/allocated_ptr.h \
 /usr/include/c++/11/ext/aligned_buffer.h \
 /usr/include/c++/11/bits/list.tcc ../machine/interrupt.h \
 ../machine/stats.h ../threads/alarm.h ../machine/timer.h \
 ../filesys/synchdisk.h ../machine/disk.h ../threads/synch.h \
 ../threads/synchlist.cc ../threads/synchlist.h
network.o: ../machine/network.cc /usr/include/stdc-predef.h \
 ../lib/copyright.h ../machine/network.h ../lib/utility.h \
 ../lib/copyright.h ../machine/callback.h ../threads/main.h \
 ../lib/debug.h ../lib/utility.h ../lib/sysdep.h \
 /usr/include/c++/11/iostream \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/os_defines.h \
 /usr/include/features.h /usr/include/features-time64.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/timesize.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/cpu_defines.h \
 /usr/include/c++/11/pstl/pstl_config.h /usr/include/c++/11/ostream \
 /usr/include/c++/11/ios /usr/include/c++/11/iosfwd \
 /usr/include/c++/11/bits/stringfwd.h \
 /usr/include/c++/11/bits/memoryfwd.h /usr/include/c++/11/bits/postypes.h \
 /usr/include/c++/11/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/floatn-common.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/11/exception /usr/include/c++/11/bits/exception.h \
 /usr/include/c++/11/bits/exception_ptr.h \
 /usr/include/c++/11/bits/exception_defines.h \
 /usr/include/c++/11/bits/cxxabi_init_exception.h \
 /usr/include/c++/11/typeinfo /usr/include/c++/11/bits/hash_bytes.h \
 /usr/include/c++/11/new /usr/include/c++/11/bits/move.h \
 /usr/include/c++/11/type_traits \
 /usr/include/c++/11/bits/nested_exception.h \
 /usr/include/c++/11/bits/char_traits.h \
 /usr/include/c++/11/bits/stl_algobase.h \
 /usr/include/c++/11/bits/functexcept.h \
 /usr/include/c++/11/bits/cpp_type_traits.h \
 /usr/include/c++/11/ext/type_traits.h \
 /usr/include/c++/11/ext/numeric_traits.h \
 /usr/include/c++/11/bits/stl_pair.h \
 /usr/include/c++/11/bits/stl_iterator_base_types.h \
 /usr/include/c++/11/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/11/bits/concept_check.h \
 /usr/include/c++/11/debug/assertions.h \
 /usr/include/c++/11/bits/stl_iterator.h \
 /usr/include/c++/11/bits/ptr_traits.h /usr/include/c++/11/debug/debug.h \
 /usr/include/c++/11/bits/predefined_ops.h /usr/include/c++/11/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/time64.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/11/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++locale.h \
 /usr/include/c++/11/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/11/cctype \
 /usr/include/ctype.h /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endianness.h \
 /usr/include/c++/11/bits/ios_base.h /usr/include/c++/11/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h \
 /usr/include/x86_64-linux-gnu/bits/struct_mutex.h \
 /usr/include/x86_64-linux-gnu/bits/struct_rwlock.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct___jmp_buf_tag.h \
 /usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/atomic_word.h \
 /usr/include/x86_64-linux-gnu/sys/single_threaded.h \
 /usr/include/c++/11/bits/locale_classes.h /usr/include/c++/11/string \
 /usr/include/c++/11/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/c++allocator.h \
 /usr/include/c++/11/ext/new_allocator.h \
 /usr/include/c++/11/bits/ostream_insert.h \
 /usr/include/c++/11/bits/cxxabi_forced.h \
 /usr/include/c++/11/bits/stl_function.h \
 /usr/include/c++/11/backward/binders.h \
 /usr/include/c++/11/bits/range_access.h \
 /usr/include/c++/11/initializer_list \
 /usr/include/c++/11/bits/basic_string.h \
 /usr/include/c++/11/ext/alloc_traits.h \
 /usr/include/c++/11/bits/alloc_traits.h \
 /usr/include/c++/11/bits/stl_construct.h /usr/include/c++/11/string_view \
 /usr/include/c++/11/bits/functional_hash.h \
 /usr/include/c++/11/bits/string_view.tcc \
 /usr/include/c++/11/ext/string_conversions.h /usr/include/c++/11/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/11/bits/std_abs.h /usr/include/c++/11/cstdio \
 /usr/include/stdio.h /usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/c++/11/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/x86_64-linux-gnu/bits/types/error_t.h \
 /usr/include/c++/11/bits/charconv.h \
 /usr/include/c++/11/bits/basic_string.tcc \
 /usr/include/c++/11/bits/locale_classes.tcc \
 /usr/include/c++/11/system_error \
 /usr/include/x86_64-linux-gnu/c++/11/bits/error_constants.h \
 /usr/include/c++/11/stdexcept /usr/include/c++/11/streambuf \
 /usr/include/c++/11/bits/streambuf.tcc \
 /usr/include/c++/11/bits/basic_ios.h \
 /usr/include/c++/11/bits/locale_facets.h /usr/include/c++/11/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_base.h \
 /usr/include/c++/11/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/11/bits/ctype_inline.h \
 /usr/include/c++/11/bits/locale_facets.tcc \
 /usr/include/c++/11/bits/basic_ios.tcc \
 /usr/include/c++/11/bits/ostream.tcc /usr/include/c++/11/istream \
 /usr/include/c++/11/bits/istream.tcc /usr/include/c++/11/stdlib.h \
 /usr/include/string.h /usr/include/strings.h ../network/netkernel.h \
 ../userprog/userkernel.h ../threads/kernel.h ../threads/thread.h \
 ../lib/sysdep.h ../machine/machine.h ../machine/translate.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../lib/list.h ../lib/debug.h ../lib/list.cc \
 /usr/include/c++/11/list /usr/include/c++/11/bits/stl_list.h \
 /usr/include/c++/11/bits/allocated_ptr.h \
 /usr/include/c++/11/ext/aligned_buffer.h \
 /usr/include/c++/11/bits/list.tcc ../machine/interrupt.h \
 ../machine/stats.h ../threads/alarm.h ../machine/callback.h \
 ../machine/timer.h ../filesys/synchdisk.h ../machine/disk.h \
 ../threads/synch.h ../threads/main.h
# DEPENDENCIES MUST END AT END OF FILE
# IF YOU PUT STUFF HERE IT WILL GO AWAY
# see make depend above
