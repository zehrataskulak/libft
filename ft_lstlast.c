/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:15:13 by zzehra            #+#    #+#             */
/*   Updated: 2025/06/18 21:15:14 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		a;
	t_list	*mv;

	mv = lst;
	a = ft_lstsize(lst);
	while (mv && a > 1)
	{
		mv = mv -> next;
		a--;
	}
	return (mv);
}
