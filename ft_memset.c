/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:15:49 by zzehra            #+#    #+#             */
/*   Updated: 2025/06/18 21:15:50 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *dest, int  value, size_t n)
{
    size_t    i;
    unsigned char    *ptr;

    ptr = (unsigned char *)dest;
    i = 0;
    while (i < n)
    {
        ptr[i] = (unsigned char)value;
        i++;
    }
    return (dest);
}

// int ve float tipinde sıfırlamak için güvenlidir. 
// bellekte belirli bir alanı istenilen bir degerle doldurur.