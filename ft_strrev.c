#include <string.h>

char *ft_strrev(char *str)
{
    char    tempa;
    int     i;
    int     j;

    i = 0;
    j = 0;
    j = strlen(str);
    while (str[i] && (i <= j--))
    {
        tempa = str[i];
        str[i] = str[j];
        str[j] = tempa;
        i++;
    }
    return (str);
}