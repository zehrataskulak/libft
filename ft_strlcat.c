#include "libft.h"

size_t strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t srcln;
    size_t dstln;

    i = 0;
    srcln = 0;
    dstln = 0;
    while (src[srcln])
        srcln++;
    while (dest[dstln])
        dstln++;
    if (size <= dstln)
        return (size + srcln);
    while (src[i] && (dstln + i < size - 1))
    {
        dest[dstln + i] = src[i];
        i++;
    }
    dest[dstln + i] = '\0';
    return (dstln + srcln);       
}