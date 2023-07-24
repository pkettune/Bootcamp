#include <stdio.h>

int	ft_compare_elements(int a, int b)
{
	if (a < b)
		return (-1);
	if (a == b)
		return (0);
	else
		return (1);
}



int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (i < length + 1)
	{
		if ((*f)(tab[i], tab[i + 1]) >= 0)
		{
			j++;
		}
		if ((*f)(tab[i], tab[i + 1]) <= 0)
		{
			k++;
		}
		i++;
	}
	if (length == j || length == k)
		return (1);
	else
		return (0);
}

int	main(void)
{
	int array[2] = {adfggfddafgf};

	printf("%d", (ft_is_sort(array, 3, &ft_compare_elements)));

	return(0);
}
/*
int	ft_count_if(char **tab, int (*f)(char*))
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