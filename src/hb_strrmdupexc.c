#define YES 1
#define NO  0
/* remove all consecutive duplicate characters in str skipping those set by except */

char    *hb_strrmdupexc(char *str, const char *except)
{
    int i;
    int j;
    int k;
    int exclude;

    i = 0;
    j = 0;
    k = 0;
    exclude = NO;
    while (str[i])
    {
        k = 0;
        exclude = NO;
        if (str[i] == str[i + 1])
        {
            while (except[k])
            {
                if (str[i] == except[k])
                    exclude = YES;
                k++;
            }
            if (exclude == NO)
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