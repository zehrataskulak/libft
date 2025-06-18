/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:16:15 by zzehra            #+#    #+#             */
/*   Updated: 2025/06/18 21:16:16 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return ((char *)&str[i]);
        i++;
    }
    if (c == '\0')
        return ((char *)&str[i]);
    return (NULL);
}