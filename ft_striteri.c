void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}

#include <stdio.h>

void ft_f(unsigned int i, char *c)
{
    *c = *c + i;
}

int main()
{
 // c[] olması önemli. araştır.
    char c[] = "zehra";
    ft_striteri(c, ft_f);
    printf ("%s\n", c);
}