#include <stdarg.h>

int hb_min_va(int va_len, ...)
{
    int     min;
    int     i;
    int     temp;
    va_list va;

    i = 1;
    va_start(va, va_len);
    min = va_arg(va, int);
    while (i < va_len)
    {
        temp = va_arg(va, int);
        if (min > temp)
            min = temp;
        i++;
    }
    va_end(va);
    return (min);
}