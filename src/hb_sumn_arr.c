/* Sum first n number of elements in an array */

#include <stdlib.h>

size_t  hb_sumn_arr(int arr[], int len, int n)
{
    size_t  sum;
    int     i;

    if (len <= 0 || n <= 0)
        return (0);
    sum = 0;
    i = 0;
    while (i < len && n > 0)
    {
        sum += arr[i++];
        n--;
    }
    return (sum);
}