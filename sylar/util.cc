#include "util.h"

namespace sylar
{
    pid_t GetThreadId(){
        return syscall(SYS_getpid);
    }
    uint32_t GetFiberId(){
        return 0;
    }
} // namespace sylar
