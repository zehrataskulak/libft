#include "libft.h"

void *ft_memcpy(void *dest, void *src, size_t n)
{
    int i;
    unsigned char   *d;
    unsigned char   *s;

    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return(dest);
}