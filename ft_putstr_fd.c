#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    int i;
    
    i = 0;
    while (s[i])
    {
        write (fd, &s[i], 1);
        i++;
    }
}

int main ()
{
    ft_putstr_fd("selam zehra bn", 1);
    ft_putstr_fd("\n", 1);
}