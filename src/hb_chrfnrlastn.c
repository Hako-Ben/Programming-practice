/* find and replace last n occurances of a char in a string */

void hb_chrfnrlastn(char *str, char find, char replace, int n)
{
    int     count;
    char    *pstr;

    if (!str || (find == replace) || n == 0)
        return ;
    count = 0;
    pstr = str;
    while (*pstr++)
        count++;
    while (n > 0 && count >= 0)
    {
        if (*(str + count) == find && *(str + count) != '\0')
        {
            *(str + count) = replace;
            n--;
        }
        count--;
    }
}