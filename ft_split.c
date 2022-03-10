#include "libft.h"

int char_is_sep(const char ch, char c)
{
    if (ch == c)
        return (0);
    else
        return (1);
}

int ft_wordlen(char const *str, int counter, char c)
{
    int i;

    i = 0;
    while (counter >= 0 && char_is_sep(str[counter], c) != 0)
    {
        counter--;
        i++;
    }
    return (i);
}

char    *ft_words(char const *str, char c, int counter)
{
    int     i;
    int     wordlen;
    int     j;
    char    *word;

    i = 0;
    wordlen = ft_wordlen(str, counter, c);
    j = (counter - wordlen) + 1;
    word = malloc((sizeof(char) * wordlen) + 1);
    while (j <= counter)
    {
        word[i] = str[j];
        i++;
        j++;
    }
    word[i] = '\0';
    return (word);
}

int ft_nb_words(char const *str, char c)
{
    int i;
    int count;

    i = 0;
    count = 1;
    while (str[i])
    {
        if (str[i] == c)
            count++;
        i++;
    }
    return (count);
}

char **ft_split(char const *s, char c)
{
    int     i;
    int     j;
    char    **nouv;

    i = 0;
    j = 0;
    nouv = malloc((sizeof(char) * ft_nb_words(s, c)) + 1);
    if (nouv == NULL)
        return (NULL);
    while (s[i])
    {
        if (char_is_sep(s[i], c) != 0)
        {
            if (char_is_sep(s[i + 1], c) == 0 || s[i + 1] == '\0')
            {
                nouv[j] = ft_words(s, c, i);
                j++;
            }
            i++;
        }
        if (char_is_sep(s[i], c) == 0)
            i++;
    }
    nouv[j] = '\0';
    j = 0;
    while (nouv[j])
    {
        printf("%s\n", nouv[j]);
        j++;
    }
    return (nouv);
}