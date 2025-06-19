/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:15:08 by zzehra            #+#    #+#             */
/*   Updated: 2025/06/19 15:15:04 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/*#include <stdio.h>

void mul_by_two(void *content)
{
    int *n = content;
    *n *= 2;
    printf ("%d\n", *(int *)content);
}*/




void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!f)
        return;
    while (lst)
    {
        f(lst -> content);
        lst = lst -> next;
    }
}



/*int main()
{
    int *x = malloc(sizeof(int));
    int *y = malloc(sizeof(int));
    int *z = malloc(sizeof(int));

	*x = 3;
	*y = 4;
	*z = 5;

    t_list *node1 = ft_lstnew(x);
    t_list *node2 = ft_lstnew(y);
    t_list *node3 = ft_lstnew(z);
    
    t_list *node0 = NULL;

    ft_lstadd_back(&node0, node1);
    ft_lstadd_back(&node0, node2);
    ft_lstadd_back(&node0, node3);

    ft_lstiter(node0, mul_by_two);
}*/