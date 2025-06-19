/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:35:50 by zzehra            #+#    #+#             */
/*   Updated: 2025/06/19 16:36:36 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *newnode;
    void *newcontent;
    t_list *newlst;
    t_list *mv;
    
    newlst = NULL;
    mv = lst;
    while (lst)
    {
        newcontent = f(lst -> content);
        newnode = ft_lstnew(newcontent);
        if (!newnode)
            ft_lstclear(&mv, del);
        ft_lstadd_back(&newlst, newnode);
        lst = lst -> next;
    }
    return (newlst);
}

