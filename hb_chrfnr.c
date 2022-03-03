/* find and replace first occurance of a char in a string */

void hb_chrfnr(char *str, char find, char replace)
{
    if (!str || (find == replace))
        return ;
    while (*str)
    {
        if (*str == find)
        {
            *str = replace;
            break ;
        }   
        str++;
    }
}