/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:16:29 by zzehra            #+#    #+#             */
/*   Updated: 2025/06/18 21:16:30 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int finallen;
    int i;
    char *arr;

    i = 0;
    finallen = ft_strlen(s1) + ft_strlen(s2);
    arr = malloc(finallen + 1);
    if (arr == NULL)
        return (NULL);
    while (*s1)
    {
        arr[i] = (char)*s1++;
        i++;
    }
    while (*s2)
    {
        arr[i] = (char)*s2++;
        i++;
    }
    arr[i] = '\0';
    return (arr);
}

#include <stdio.h>

int main() 
{
    char *s1 = "selam ben ";
    char *s2 = "zehra huu";
    char *s3 = ft_strjoin(s1, s2);
    printf ("%s\n", s3);
}