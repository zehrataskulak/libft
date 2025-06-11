#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *arr;

    i = 0;
    if (start > ft_strlen(s))
    {
        //start string dışında başlatılırsa fonksiyon tanımsız davranmamalıdır.
        //NULL dondurseydi se fault
       arr = malloc(1);
        if (arr == NULL)
            return (NULL);
        arr[0] = '\0'; //eskiden kullanılan bellek degeri gelebilir, omlemek icin.
        return (arr);
    }
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