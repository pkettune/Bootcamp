#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
    write (1, &c, 1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;

	if (str[i] != '\0')
	return (1);
	else
	return(0);
}

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	if (tab[i][0] == '\0')//if there's even a single value inside even a single string...
		i++;

	if (f(tab[i]))//so if ft_putstr (f(..)) is true (it will return with value 1)
		return (1);//...it will return 1
		
	return (0);
}

int	main(void)
{
	int		i;
	int		j;
	char	**tab;
	char	a = 'A';
	char	b = 'B';

	i = 0;
	*tab = "asdf" "ffdsa" "ghkj" "trrt";
		if (ft_any(tab, &ft_putstr))
			ft_putchar(a);
		else
			ft_putchar(b);
	return(0);
}