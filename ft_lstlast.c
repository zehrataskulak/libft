#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list *mv = lst;
	int a;

	a = ft_lstsize(lst);
	while (mv && a > 1)
	{
		mv = mv -> next;
		a--;
	}
	return (mv);
}

/*#include <stdio.h>

int main ()
{
	int x = 3;
	int y = 4;
	int z = 5;

	t_list *noode0 = NULL;
	t_list *noode1 = ft_lstnew(&x);
	t_list *noode2 = ft_lstnew(&y);
	t_list *noode3 = ft_lstnew(&z);

	ft_lstadd_front(&noode0, noode3);
	ft_lstadd_front(&noode0, noode2);
	ft_lstadd_front(&noode0, noode1);


	printf("%d\n", *(int *)(ft_lstlast(noode0) -> content));
}*/