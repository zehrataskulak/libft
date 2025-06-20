/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:17:03 by zzehra            #+#    #+#             */
/*   Updated: 2025/06/20 01:31:52 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    int size;
    unsigned char uc;

    uc = (unsigned char)c;
    size = (int)ft_strlen(str);
    while (size >= 0)
    {
        if (str[size] == uc)
            return ((char *)str + size);
        size--;
    }
    return (NULL);
}
// son gorulen eslesmeyi bulmak icin string i sondan tarayarak ilerlemeyi tercih ettim.