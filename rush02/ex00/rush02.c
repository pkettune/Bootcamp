/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:50:47 by jimmonen          #+#    #+#             */
/*   Updated: 2022/08/27 17:35:31 by pkettune         ###   ########.fr       */
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

void	rush2(int x, int y)
{
	char	*point1;
	char	*point2;
	char	*point3;
	int		index;
	int		indexy;

	point1 = "ABA\n";
	point2 = "B B\n";
	point3 = "CBC\n";
	index = 0;
	indexy = 0;
	while (indexy < y)
	{
		if (index == 0)
		{
			line(x, point1);
			index++;
		}
		else if (index == y)
			line(x, point3);
		else
			line(x, point2);
		index++;
		indexy++;
	}
}