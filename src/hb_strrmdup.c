/* remove all consecutive duplicate characters in str */

char            *hb_strrmdup(char *str)
{
    int     i;
    int     j;

    i = 0;
    j = 0;
    while (str[i])
    {
        if (str[i] == str[i + 1])
        {
            i++;
            continue;
        }
        str[j++] = str[i++];
    }
    str[j] = '\0';
    return (str);
}
