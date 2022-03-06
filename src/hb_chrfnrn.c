/* find and replace first n occurances of a char in a string */

void hb_chrfnrn(char *str, char find, char replace, int n)
{
    if (!str || (find == replace) || n == 0)
        return ;
    while (*str)
    {
        if (*str == find && n > 0)
        {
            *str = replace;
            n--;
        }   
        str++;
    }
}