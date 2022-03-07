int hb_strccount(char *str, char c)
{
    int count;

    count = 0;
    if (str)
        while(*str)
            if (*str++ == c)
                count++;
    return (count);
}