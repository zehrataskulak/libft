// fonksiyon orjinalı size_t yapısında ama kütüphane eklemeden kullanamayız.
int ft_strlen(const char  *str)
{
    int len;

    len = 0;
    while (str[len])
        len++;
    return (len);
}