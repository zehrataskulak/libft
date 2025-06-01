// fonksiyon orjinali size_t n tipi kullanmış ama kütüphane eklemeden burda kullanamyız.
void *ft_memset(void *dest, int  value, int  n)
{
    int    i;
    unsigned char    *ptr;

    ptr = (unsigned char *)dest;
    i = 0;
    while (i < n)
    {
        ptr[i] = (unsigned char)value;
        i++;
    }
    return (dest);
}

// int ve float tipinde sıfırlamak için güvenlidir. 
// bellekte belirli bir alanı istenilen bir degerle doldurur.