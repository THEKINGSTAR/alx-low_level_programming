#include <stdarg.h>
#include <stdio.h>

void print_ints(int args_count,...)
{
    int i;
    printf ("args_count=%d\n",args_count);
    printf ("args=");
    // initialize arg pointer
    va_list arg_pointer;
    // start processing variable arguments
    va_start(arg_pointer,args_count);
    // process
    //
}
