#include "libft.h"

static int ft_findstart(char const *s1, char const *set)
{
    int i;
    int j;
    int found;

    i = 0;
    while (s1[i])
    {
        j = 0;
        found = 0;
        while (set[j])
        {
            if (s1[i] == set[j])
                found = 1;
            j++;
        }
        if (found != 1)
            return (i);
        i++;
    }
    return (i);
}

static int ft_findend(char const *s1, char const *set)
{
    int i;
    int j;
    int found;

    i = (int)ft_strlen(s1) - 1;
    while (i >= 0)
    {
        j = 0;
        found = 0;
        while (set[j])
        {
            if (s1[i] == set[j])
                found = 1;
            j++;
        }
        if (found != 1)
            return (i);
        i--;
    }
    return (i);
}

static char *ft_findarray(char const *s1, char *arr, int start, int end)
{
    int i;

    i = 0;
    while (start <= end)
            arr[i++] = s1[start++];
        arr[i] = '\0';
        return (arr);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;
    char *arr;
    
    if (s1 == NULL)
        return (NULL);
    start = ft_findstart(s1, set);
    end = ft_findend(s1, set);
    if (start <= end)
    {
        arr = malloc(end - start + 2);
        if (arr == NULL)
            return (NULL);
        return(ft_findarray(s1 ,arr, start, end));
    }
    else
    {
        arr = malloc(1);
        if (arr == NULL)
            return (NULL);
        arr[0] = '\0';
        return (arr);
    }
}

///////////////////////////////////////////////////////

/*static int	ft_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && ft_char_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_char_in_set(s1[end - 1], set))
		end--;
	str = (char*)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}*/




#include <stdio.h>

int main()
{
    char *s1 = "dkdkdkkkd";
    char *set = "dk";
  //  printf("%d\n\n\n", ft_findstart(s1, set));
    char *final = ft_strtrim(s1, set);
    printf ("%s\n", final);
  //  int a = ft_findend(s1, set);
  //  printf("%d\n", a);
}