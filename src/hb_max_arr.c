int hb_max_arr(int len, int arr[])
{
    int i;
    int max;

    i = 0;
    max = arr[i++];
    while (i < len)
    {
        if (max < arr[i])
            max = arr[i];
        i++;
    }
    return (max);
}