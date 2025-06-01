int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int i;
    unsigned char   *ss1;
    unsigned char   *ss2;

    ss1 = (const unsigned char *)s1;
    ss2 = (const unsigned char *)s2;
    i = 0;
    if (n==0)
        return (0);
    while (i < n)
    {
        if (ss1[i] != ss2[i])
        {
            return ((int)(ss1[i] - ss2[i]));
        }
        i++;
    }
    return (0);
}