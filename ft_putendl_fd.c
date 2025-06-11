#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    int i;
    
    i = 0;
    while (s[i])
    {
        write (fd, &s[i], 1);
        i++;
    }
    write (fd, "\n", 1);
}

int main ()
{
    ft_putendl_fd("selam zehra bn", 1);
    write (1, "n", 1);
}