#include <string.h>

char    *strlrev(char *str, unsigned int start, size_t len)
{
    char    tempa;
    size_t  str_len;
    size_t  end;

    end = start + len;
    str_len = strlen(str);
    if (str_len < end)
        end = str_len;
    if (start < end)
    {
        while (str[start] && (start <= end--))
        {
            tempa = str[start];
            str[start] = str[end];
            str[end] = tempa;
            start++;
        }
    }
    return (str);
}