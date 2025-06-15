#include "libft.h"

  /*void	del(void *a)
{
	free(a);
}*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del)
		return ;
	del(lst->content);
	free(lst);
}

/*#include <stdio.h>

int main ()
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

	ft_lstdelone(node2, del);
	node1 -> next = node3;
    t_list *mv = node0;
    while (mv)
    {
        printf("%d\n", *(int *)(mv -> content));
        mv = mv -> next;
    }
} */




/*int	main(void)
{
	int *a = malloc(sizeof(int));

	*a = 5;
	free(a);
	return (0);
}*/