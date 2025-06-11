#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    int i;
    char *arr;

    i = 0;
    arr = ft_itoa(n);
    while (arr[i])
    {
        write (fd, &arr[i], 1);
        i++;
    }
}

int main()
{
    ft_putnbr_fd(-2147483648, 1);
    write (1, "\n", 1);
}