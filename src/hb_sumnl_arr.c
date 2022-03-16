/* Sum n number of elements in an array starting from index i */

#include <stdlib.h>

size_t  hb_sumnl_arr(int arr[], int len, int n, int i)
{
    size_t  sum;

    if (len == 0 || n == 0 || i > len || i < 0)
        return (0);
    sum = 0;
    while (n > 0 && i < len)
    {
        sum += arr[i++];
        n--;
    }
    return (sum);
}