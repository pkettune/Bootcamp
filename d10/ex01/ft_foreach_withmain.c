/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach_withmain.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:40:22 by pkettune          #+#    #+#             */
/*   Updated: 2022/08/24 17:06:11 by pkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
	
}
/*
int	ft_putstr(int *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
*/
//int		ft_foreach(int *tab, int length, int (*f)(int)) <- pointer to called function

int	*ft_mapppe(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*array;

	i = 0;
	array = (int *)malloc(sizeof(int) * length);
	if (array == NULL)
		return (NULL);
	while (i < length)
	{
		array[i] = f(tab[i]);
		i++;
	}
	return (array);
}

/*
void   ft_foreach(int *tab, int length, void(*f)(int))
{
    int i;
    
    i = 0;
    while (i < length)
    {
        (*f)(tab[i]);
        i++;
    }
}
*/
int		main(void)
{
	int str[3];
	str[0] = 2;
	str[1] = 4;
	str[2] = 6;

	ft_mapppe(str, 3, &ft_putnbr);
	return 0;
}

/*
	array = ft_mapppe(tab, 1337, &ft_putnbr);//address of function

	i = 0;
	while (array[i] != '\0')
	{
		putchar(array[i]);
		i++;
	}
	return (0);
}
*/