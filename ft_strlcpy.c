/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:16:40 by zzehra            #+#    #+#             */
/*   Updated: 2025/06/18 21:16:41 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;
    int srcsize;
 
    i = 0;
    srcsize = 0;
    while (src[srcsize])
        srcsize++;
    if (size == 0)
        return (srcsize);
    while(src[i] && (i < size - 1))
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (srcsize);
}