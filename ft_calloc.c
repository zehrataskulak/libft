#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = malloc(nmemb * size);
	if (p == NULL || nmemb == 0 || size == 0)
		return (NULL);
	ft_bzero(p, size);
	return (p);
}