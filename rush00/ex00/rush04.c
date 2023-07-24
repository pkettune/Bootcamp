/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:34:55 by jimmonen          #+#    #+#             */
/*   Updated: 2022/09/01 16:50:52 by pkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	line(int l, char *str)
{
	int	in;

	in = 0;
	while (in < l)
	{
		if (l == 1)
		{
			ft_putchar (str[0]);
			ft_putchar (str[3]);
		}
		else if (in == 0)
			ft_putchar (str[0]);
		else if (in == l - 1)
		{
			ft_putchar (str[2]);
			ft_putchar (str[3]);
		}
		else if (in < l)
			ft_putchar (str[1]);
		else
			ft_putchar (str[3]);
		in = in + 1;
	}
}

void	rush04(int x, int y)
{
	char	*point1;
	char	*point2;
	char	*point3;
	int		index;

	point1 = "ABC\n";
	point2 = "B B\n";
	point3 = "CBA\n";
	index = 0;
	while (index < y)
	{
		if (index == 0)
			line(x, point1);
		else if (index == y - 1)
		{
			line(x, point3);
			break ;
		}
		else
			line(x, point2);
		index++;
	}
}
