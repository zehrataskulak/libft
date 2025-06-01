void ft_bzero(void *p, int n)
{
    unsigned char *ptr;
    int i;

    i = 0;
    ptr = (unsigned char *)p;
    while (i < n)
    {
        ptr[i] = 0;
        i++;
    }
}