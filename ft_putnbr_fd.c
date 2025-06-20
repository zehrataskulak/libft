/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:16:03 by zzehra            #+#    #+#             */
/*   Updated: 2025/06/20 03:04:34 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    long nb;

    nb = n;
    if (nb < 0)
    {
        nb *= -1;
        ft_putchar_fd('-', fd);
    }
    if (nb < 10)
		ft_putchar_fd(nb + '0', fd);
	else
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}

    
    /*int i;
    char *arr;

    i = 0;
    arr = ft_itoa(n);
    while (arr[i])
    {
        write (fd, &arr[i], 1);
        i++;
    }*/
}

/*int main()
{
    ft_putnbr_fd(-2147483648, 1);
    write (1, "\n", 1);
}*/