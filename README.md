10.24
int32_t 和 int 一样但是 不一样的地方在于 如果机器不一样 可能int就不是32bit
10.28
typedef share_ptr<> ptr 这是一种非常安全的做法
一般使用const 在函数上 意味着在这个上面并没有对类的成员进行任何修改
!! 会将后面式子的值转为bool
10.29
本次使用了宏的函数
switch (level) {
    #define XX(name) case LogLevel::name: return #name;
    XX(DEBUG);
    XX(INFO);
    XX(WARN);
    XX(ERROR);
    XX(FATAL);
    #undef XX
    default: return "UNKNOWN";
}
switch 语句根据传入的 level 值查找相应的 case。对于每个日志级别，使用宏 XX 将枚举值与其名称相对应。

12.1
出现段问题的原因在于对于logappender当中的formatter并没有进行初始化

12.14
特性	        vasprintf	                  vsnprintf
内存分配	自动分配内存（动态分配，需 free）	由用户提供缓冲区
缓冲区不足	不会失败	                     如果缓冲区不足，输出会被截断
跨平台支持	只在 GNU 平台可用	            标准 C/C++ 函数，跨平台支持
使用难度	更加方便，避免手动管理缓冲区大小	用户需估算缓冲区大小
__VA_ARGS__ 必须和 ... 一起使用
__VA_ARGS__ 是为变参宏设计的，必须与 ... 搭配使用。
