/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:15:28 by zzehra            #+#    #+#             */
/*   Updated: 2025/06/18 21:15:29 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int count;
	t_list *mv = lst;

	count = 0;
	while (mv)
	{
		mv = mv -> next;
		count++;
	}
	return (count);
}

/*#include <stdio.h>

int main ()
{
	int x = 3;
	int y = 4;
	int z = 5;

	int a;

	t_list *noode0 = NULL;
	t_list *noode1 = ft_lstnew(&x);
	t_list *noode2 = ft_lstnew(&y);
	t_list *noode3 = ft_lstnew(&z);

	ft_lstadd_front(&noode0, noode3);
	ft_lstadd_front(&noode0, noode2);
	ft_lstadd_front(&noode0, noode1);

	a = ft_lstsize(noode1);
	printf("%d\n", a);
}*/