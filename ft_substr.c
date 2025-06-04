#include "libft.h"

void    ft_check_s(char *s, char *arr, int start)
{
    if (s == NULL)
        return (NULL);
    if (start >= ft_strlen(s))
    {
        arr = malloc(1);
        if (arr == NULL)
            return (NULL);
        arr[0] = '\0';
        return (arr);
    }
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *arr;

    i = 0;
    ft_check_s(s, arr, start);
    arr = malloc(len + 1);
    if (arr == NULL)
        return (NULL);
    while (s[i + start] && i < len)
    {
        arr[i] = s[i + start];
        i++;
    }
    arr[i] = '\0';
    return (arr);
}