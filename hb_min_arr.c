int hb_min_arr(int len, int arr[])
{
    int i;
    int min;

    i = 0;
    min = arr[i++];
    while (i < len)
    {
        if (min > arr[i])
            min = arr[i];
        i++;
    }
    return (min);
}