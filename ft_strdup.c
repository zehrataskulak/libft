#include "libft.h"

char *ft_strdup(const char *s)
{
	char	*p;
	int	size;
	int	i;

	size = 0;
	i = 0;
	while (s[size])
		size++;
	p = malloc((size + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (s[i])
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}