/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:16:03 by zzehra            #+#    #+#             */
/*   Updated: 2025/06/18 21:16:04 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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