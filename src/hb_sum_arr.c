#include <stdlib.h>

size_t  hb_sum_arr(int arr[], int len)
{
    size_t  sum;
    int     i;

    sum = 0;
    i = 0;
    while (i < len)
        sum += arr[i++];
    return (sum);
}