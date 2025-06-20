/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:16:50 by zzehra            #+#    #+#             */
/*   Updated: 2025/06/19 23:00:12 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *arr;
    
    i = 0;
    if (!s)
        return (NULL);
    arr = ft_strdup (s);
    if (arr == NULL)
        return (NULL);
    while (s[i])
    {
        arr[i] = f(i, arr[i]);
        i++;
    }
    return (arr);
}