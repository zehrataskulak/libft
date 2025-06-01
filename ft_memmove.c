void *ft_memmove(void *dest, const void *src, size_t n)
{
    int i;
    unsigned char *d;
    unsigned char *s;

    d = (unsigned char *)dest;
    s = (unsigned const char *)src;
    i = 0;
    if (d < s)
    {
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
        
    }
    else if (d > s)
}
// dest ve src nin bellek bölgelerinin çakıçmasını onler.