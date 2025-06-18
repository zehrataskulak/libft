/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:15:32 by zzehra            #+#    #+#             */
/*   Updated: 2025/06/18 21:15:33 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char   *ptr;

    ptr = (unsigned char *)s;
    i = 0;
    while(i < n)
    {
        if (ptr[i] == (unsigned char)c)
            return(&ptr[i]);
        i++;
    }
    return (NULL);
}