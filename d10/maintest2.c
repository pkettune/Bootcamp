#include <stdio.h>
/*
int	ft_compare_elements(int i, int j)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i])
		i++;
	}
	if (i > 0)
		return (1);
	else
		return (0);
}
*/

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (tab[i] != '\0')
	{
		if ((*f)(tab[i]) < (*f)(tab[i + 1]))
			return (-1);
		if ((*f)(tab[i]) > (*f)(tab[i + 1]))
			return (1);
		else
			i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	ft_count_if(argv, &ft_compare_elements);
}



/*int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
		j++;
	i++;
	}
	printf("%d", j);
	return (j);
}
*/
