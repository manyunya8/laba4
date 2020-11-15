int isAlpha(char a)
{
    return (a >= 'A' && a <= 'Z' || a >= 'a' && a <= 'z');
}

int insertSpace(char* i)
{
    int k = 0;
    while (*i != '\0')
    {
        if (isAlpha(*i))
        {
            k++;
            printf("%c", *i);
        }
        else
        {
            for (k; k > 0; k--)
            {
                printf(" ");
            }
            if (*i != ' ')
            {
                printf("%c",*i);
            }
        }
        i++;
    }
    printf("\n");
    return 0;
}