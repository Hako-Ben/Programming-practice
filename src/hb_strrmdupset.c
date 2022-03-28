/* remove all consecutive duplicate characters set by variable 'set' in a string */

#define YES 1
#define NO  0

char            *hb_strrmdupset(char *str, const char *set)
{
    int i;
    int j;
    int k;
    int remove;

    i = 0;
    j = 0;
    k = 0;
    remove = NO;
    while (str[i])
    {
        k = 0;
        remove = NO;
        if (str[i] == str[i + 1])
        {
            while(set[k])
            {
                if (str[i] == set[k])
                    remove = YES;
                k++;
            }
            if (remove == YES)
            {
                i++;
                continue ;
            }
        }
        str[j++] = str[i++];
    }
    str[j] = '\0';
    return (str);
}