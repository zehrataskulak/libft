/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaskula <ztaskula@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:17:09 by zzehra            #+#    #+#             */
/*   Updated: 2025/06/28 14:39:02 by ztaskula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_findstart(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	found;

	i = 0;
	while (s1[i])
	{
		j = 0;
		found = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				found = 1;
			j++;
		}
		if (found != 1)
			return (i);
		i++;
	}
	return (i);
}

static int	ft_findend(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	found;

	i = (int)ft_strlen(s1) - 1;
	while (i >= 0)
	{
		j = 0;
		found = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				found = 1;
			j++;
		}
		if (found != 1)
			return (i);
		i--;
	}
	return (i);
}

static char	*ft_findarray(char const *s1, char *arr, int start, int end)
{
	int	i;

	i = 0;
	while (start <= end)
		arr[i++] = s1[start++];
	arr[i] = '\0';
	return (arr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*arr;

	if (s1 == NULL)
		return (NULL);
	start = ft_findstart(s1, set);
	end = ft_findend(s1, set);
	if (start <= end)
	{
		arr = malloc(end - start + 2);
		if (arr == NULL)
			return (NULL);
		return (ft_findarray(s1, arr, start, end));
	}
	else
	{
		arr = malloc(1);
		if (arr == NULL)
			return (NULL);
		arr[0] = '\0';
		return (arr);
	}
}
