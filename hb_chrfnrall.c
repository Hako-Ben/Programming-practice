/* find and replace all occurances of a char in a string.
    return number of chars repalced */

int hb_chrfnrall(char *str, char find, char replace)
{
    int count;

    count = 0;
    if (!str || (find == replace))
        return (count);
    while (*str)
    {
        if (*str == find)
        {
            *str = replace;
            count++;
        }
        str++;
    }
    return (count);
}