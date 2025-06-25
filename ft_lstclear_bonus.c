/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:14:56 by zzehra            #+#    #+#             */
/*   Updated: 2025/06/18 21:14:57 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*mv;

	if (!lst || !del)
		return ;
	mv = *lst;
	while (*lst)
	{
		mv = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = mv;
	}
	*lst = NULL;
}
