A simple program to allow reproduce the crash from https://bugs.freedesktop.org/show_bug.cgi?id=99066

The crash happens with any GCC (4.9.4, 5.4, 6.4, 7.2, ...):

 g++ -mx32 -ggdb3 -O0 get_cpuid_crash.cpp


But works in the following variants

 g++ -mx32 -ggdb3 -O1 get_cpuid_crash.cpp

 g++ -m64 -ggdb3 -O0 get_cpuid_crash.cpp

 clang++ -mx32 -g3 -O0get_cpuid_crash.cpp
