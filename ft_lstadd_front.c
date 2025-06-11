#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new -> next = *lst;
 // lst* adresi artık new node ye  ait çünkü o baş.
    *lst = new;
}

#include <stdio.h>

int main ()
{
    int x = 1;
    int y = 2;
    int z = 3;

    t_list *node1 = ft_lstnew(&x);
    t_list *node2 = ft_lstnew(&y);
    t_list *node3 = ft_lstnew(&z);
    
    t_list *node0 = NULL;

    ft_lstadd_front(&node0, node3);
    ft_lstadd_front(&node0, node2);
    ft_lstadd_front(&node0, node1);

    t_list *mv = node0;
    while (mv)
    {
        printf("%d\n", *(int *)(mv -> content));
        mv = mv -> next;
    }
}