#ifndef __SYLAR__UTIL__H
#define __SYLAR__UTIL__H
#include <pthread.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/syscall.h>
#include <stdio.h>
#include <stdint.h>

namespace sylar
{
    pid_t GetThreadId();
    uint32_t GetFiberId();
} // namespace sylar

#endif