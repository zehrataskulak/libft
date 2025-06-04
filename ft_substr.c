#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *arr;

    i = 0;
    if (start > ft_strlen(arr))
        return (NULL);
    arr = malloc(len + 1);
    if (arr == NULL)
        return (NULL);
    while(s[i + start] && i < len)
    {
        arr[i] = s[i + start];
        i++;
    }
    arr[i] = '\0';
    return (arr);
}