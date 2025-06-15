#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *mv;

    mv = *lst;
    while (*lst)
    {
        mv = (*lst) -> next;
        ft_lstdelone(*lst, del);
        *lst = mv;
    }
    *lst = NULL;
}




/*#include <stdio.h>

int main()
{
    int *x = malloc(sizeof(int));
    int *y = malloc(sizeof(int));
    int *z = malloc(sizeof(int));
    int *t = malloc(sizeof(int));

	*x = 3;
	*y = 4;
	*z = 5;
    *t = 6;

    t_list *node1 = ft_lstnew(x);
    t_list *node2 = ft_lstnew(y);
    t_list *node3 = ft_lstnew(z);
    t_list *node4 = ft_lstnew(t);
    
    t_list *node0 = NULL;

    ft_lstadd_front(&node0, node4);
    ft_lstadd_front(&node0, node3);
    ft_lstadd_front(&node0, node2);
    ft_lstadd_front(&node0, node1);

	ft_lstclear(&node0, free);
	//node1 -> next = node3;
    t_list *mv = node0;
    while (mv)
    {
        printf("%d\n", *(int *)(mv -> content));
        mv = mv -> next;
    }
}*/