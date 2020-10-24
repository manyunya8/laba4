int isAlpha(char a)
{
    return (a >= 'A' && a <= 'Z' || a >= 'a' && a <= 'z');
}

char* insertSpace(char* i)
{
    int k = 0;
    char static res[512];
    char * a = res;
    while (*i != '\0')
    {
        if (isAlpha(*i))
        {
            k++;
            *a = *i;
            a++;
        }
        else
        {
            for (k; k > 0; k--)
            {
                *a = ' ';
                a++;
            }
            if (*i != ' ')
            {
                *a = *i;
                a++;
            }
        }
        i++;
    }
    return res;
}