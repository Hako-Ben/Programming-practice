/* Sum last n number of elements in an array */

#include <stdlib.h>

size_t  hb_sumnr_arr(int arr[], int len, int n)
{
    size_t  sum;
    int     count;

    if (len == 0 || n == 0)
        return (0);
    count = 0;
    sum = 0;
    while(len-- > 0 && count < n)
    {
        sum += arr[len];
        count++;
    }
    return(sum);
}