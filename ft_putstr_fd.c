/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:16:07 by zzehra            #+#    #+#             */
/*   Updated: 2025/06/18 21:16:08 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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