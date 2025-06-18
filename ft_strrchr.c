/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:17:03 by zzehra            #+#    #+#             */
/*   Updated: 2025/06/18 21:17:06 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    int size;

    size = 0;
    while (str[size])
        size++;
    if (c == '\0')
        return ((char *)&str[size]);
    size--;
    while (size >= 0)
    {
        if (str[size] == c)
            return ((char *)&str[size]);
        size--;
    }
    return (NULL);
}
// son gorulen eslesmeyi bulmak icin string i sondan tarayarak ilerlemeyi tercih ettim.