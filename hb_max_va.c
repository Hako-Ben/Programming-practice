#include <stdarg.h>

int hb_max_va(int va_len, ...)
{
    int     max;
    int     i;
    int     temp;
    va_list va;

    i = 1;
    va_start(va, va_len);
    max = va_arg(va, int);
    while (i < va_len)
    {
        temp = va_arg(va, int);
        if (max < temp)
            max = temp;
        i++;
    }
    va_end(va);
    return (max);
}