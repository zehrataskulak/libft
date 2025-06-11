#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *arr;
    
    i = 0;
    if (!s)
        return (NULL);
    arr = ft_strdup (s);
    while (s[i])
    {
        arr[i] = f(i, arr[i]);
        i++;
    }
    return (arr);
}