#include <stdlib.h>
#include <stdarg.h>

size_t          hb_sum_va(int va_len, ...)
{
    size_t  sum;
    va_list va;
    int     temp;

    if (va_len <= 0)
        return (0);
    sum = 0;
    temp = 0;
    va_start(va, va_len);
    while (va_len > 0)
    {
        temp = va_arg(va, int);
        sum += temp;
        va_len--;
    }
    return (sum);
}