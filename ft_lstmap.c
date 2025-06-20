/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:35:50 by zzehra            #+#    #+#             */
/*   Updated: 2025/06/21 00:25:00 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *newnode;
    void *newcontent;
    t_list *newlst;
    
    newlst = NULL;
    while (lst)
    {
        newcontent = f(lst -> content);
        newnode = ft_lstnew(newcontent);
        if (!newnode)
        {
            del(newcontent);
            ft_lstclear(&newlst, del);
            return (NULL);
        }
        ft_lstadd_back(&newlst, newnode);
        lst = lst -> next;
    }
    return (newlst);
}