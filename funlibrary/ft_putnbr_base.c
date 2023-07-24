/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:21:25 by pkettune          #+#    #+#             */
/*   Updated: 2022/08/21 15:21:25 by pkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Create a function that displays a number in a base system onscreen.
• This number is given in the shape of an int, and the radix in the shape of a string of characters.
• The base-system contains all useable symbols to display that number :
◦ 0123456789 is the commonly used base system to represent decimal numbers ;
◦ 01 is a binary base system ;
◦ 0123456789ABCDEF an hexadecimal base system ;
◦ poneyvif is an octal base system.
 • The
function must handle negative numbers.
• If there’s an invalid argument, nothing should be displayed. Examples of invalid arguments :
◦ base ◦ base ◦ base ◦ etc.
is empty or size of 1;
contains the same character twice ;
contains + or - ;

allowed functions ft_putchar
*/

int		check_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size_base;
	int	nbr_final[100];
	int	i;

	i = 0;
	size_base = 0;
	if (check_base(base))
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		while (base[size_base])
			size_base++;
		while (nbr)
		{
			nbr_final[i] = nbr % size_base;
			nbr = nbr / size_base;
			i++;
		}
		while (--i >= 0)
			ft_putchar(base[nbr_final[i]]);
	}
}