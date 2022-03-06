/* find and replace last occurance of a char in a string */

void hb_chrfnrlast(char *str, char find, char replace)
{
    char    *temp;

    temp = (char *) 0;
    if (!str || (find == replace))
        return ;
    while (*str)
    {
        if (*str == find)
            temp = str;
        str++;
    }
    if (temp)
        *temp = replace;
}