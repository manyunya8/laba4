int isAlpha(char a)
{
    return (a >= 'A' && a <= 'Z' || a >= 'a' && a <= 'z');
}

int insertSpace(char* a, char* b)
{
    int k = 0;
    int count = 0;
    while (*a != '\0')
    {
        if (isAlpha(*a))
        {
            k++;
            *b = *a;
            b++;
            count++;
        }
        else
        {
            for (k; k > 0; k--)
            {
                *b = ' ';
                b++;
                count++;
            }
            if (*a != ' ')
            {
                *b = *a;
                b++;
                count++;
            }
        }
        a++;
    }
    *b = 0;
    return count;
}