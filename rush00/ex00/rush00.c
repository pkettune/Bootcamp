/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:55:51 by pkettune          #+#    #+#             */
/*   Updated: 2022/09/01 17:11:19 by pkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	line(int l, char *str);

void	rush00(int x, int y)
{
	char	*point1;
	char	*point2;
	int		index;

	point1 = "o-o\n";
	point2 = "| |\n";
	index = 0;
	while (index < y)
	{
		if (index == 0 || index == y - 1)
			line(x, point1);
		else
			line(x, point2);
		index++;
	}
}

void	rush01(int x, int y)
{
	char	*point1;
	char	*point2;
	char	*point3;
	int		index;

	point1 = "/*\\\n";
	point2 = "* *\n";
	point3 = "\\*/\n";
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

void	rush02(int x, int y)
{
	char	*point1;
	char	*point2;
	char	*point3;
	int		index;

	point1 = "ABA\n";
	point2 = "B B\n";
	point3 = "CBC\n";
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

void	rush03(int x, int y)
{
	char	*point1;
	char	*point2;
	char	*point3;
	int		index;

	point1 = "ABC\n";
	point2 = "B B\n";
	point3 = "ABC\n";
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
