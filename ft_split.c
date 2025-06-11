#include "libft.h"

static int ft_arrlng(const char *s, char c)
{
    int arrlng;

    arrlng = 0;
    while (*s == c)
        s++;
    while (*s)
    {
        if (*s == c)
            return(arrlng);
        s++;
        arrlng++;
    }
    return(arrlng);
}

static int ft_findrow(char const *s, char c)
{
    int count;
    int i;

    i = 0;
    count = 0;
    while (s[i])
    {
        if (s[i] != c && (i == 0 || s[i - 1] == c))
            count++;
        i++;
    }
    return (count);
}

static char *ft_strncpy(char *dest, const char *src, size_t size)
{
    size_t i;

    i = 0;
    while (*src && i < size)
    {
        dest[i] = *src++;
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

/*static const char *ft_chngnarr(const char *s, char **arr, char c, size_t n)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while (s[i] && j < n)
    {
        if (s[i] == c)
        arr[j] = (char *)&s[i];
        i++;
    }
    arr[i] = NULL;
    return (s + (int)i);
}

char **ft_split(char const *s, char c)
{
    int i;
    char **arr;
    
    i = 0;
    arr = malloc ((ft_findrow(s, c) + 1) * sizeof(char *));
    if (arr == NULL)
        return (NULL);
    while (i < ft_findrow(s, c))
    {
        arr[i++] = malloc (ft_arrlng(s, c) + 1);
        if (arr[i] == NULL)
            return (NULL);
        s = ft_chngnarr(s, arr, c, ft_arrlng(s, c));
        free(arr[i]);
    }
    arr[i] = '\0';
    return (arr);
}*/

static char **ft_freeall(char **arr, int i)
{
    while (i >= 0)
        free(arr[i--]);
    free(arr);
    return (NULL);
}

static char **ft_split(const char *s, char c)
{
    int i; 
    char **arr;

    i = 0;
    arr = malloc((ft_findrow(s, c) + 1) * sizeof(char *));
    if (!arr) 
        return (NULL);
    while (*s)
    {
        while (*s == c) 
            s++;
        arr[i] = malloc(ft_arrlng(s, c) + 1);
        if (!arr[i])
            return (ft_freeall(arr, i));
        ft_strncpy(arr[i], s, ft_arrlng(s, c));
        arr[i][ft_arrlng(s, c)] = '\0';
        i++;
        s += ft_arrlng(s, c);
    }
    arr[i] = NULL;
    return (arr);
}


#include <stdio.h>

int main()
{
   // printf("%d\n", ft_arrlng("selam ben zehra 21", ' '));
   // printf("%d\n", ft_arrlng(" ben zehra 21", ' '));

   // printf("%d\n", ft_findrow("selam ben zehra 21", ' '));

   char *s =  "  selam ben zehra 21  ";
   char **arr = ft_split(s, ' ');
   for (int i = 0; i < ft_findrow(s, ' '); i++)
   {
        printf("%s\n", arr[i]);
   } 
}