#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    int i;
    int srcsize;
 
    i = 0;
    srcsize = 0;
    while (src[srcsize])
        srcsize++;
    if (size == 0)
        return (srcsize);
    while(src[i] && (i < size - 1))
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (srcsize);
}