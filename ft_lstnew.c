/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:15:18 by zzehra            #+#    #+#             */
/*   Updated: 2025/06/18 21:15:19 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *newnode;

    newnode = malloc (sizeof(t_list));
    if (newnode == NULL)
        return (NULL);
    newnode -> content = content;
    newnode -> next = NULL;
    return (newnode);
}

/*#include <stdio.h>

int main ()
{
  //  int x = 5;

    int x = 5;
    char y = 'a';
    int z = 9;

    t_list *noode = ft_lstnew(&x);
  //  printf ("%d\n", *(int *)(noode -> content));  
    t_list *noode1 = ft_lstnew(&y);
  //  printf ("%d\n", *(int *)(noode1 -> content));
    t_list *noode2 = ft_lstnew(&z);
  //  printf ("%d\n", *(int *)(noode1 -> content));

    noode -> next = noode1;
    noode1 -> next = noode2;

    t_list *mv = noode;

    while (mv)
    {
        if (mv == noode1)
            printf("%c\n", *(char *)(mv -> content));
        else
            printf("%d\n", *(int *)(mv -> content));

        mv = mv -> next;
    }
} */