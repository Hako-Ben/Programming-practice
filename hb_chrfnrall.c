/* find and replace all occurances of a char in a string */

void hb_chrfnrall(char *str, char find, char replace)
{
    if (!str || (find == replace))
        return ;
    while (*str)
    {
        if (*str == find)
            *str = replace;
        str++;
    }
}