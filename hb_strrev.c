#include <string.h>

char *hb_strrev(char *str)
{
    char    tempa;
    size_t  i;
    size_t  j;

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