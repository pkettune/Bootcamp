/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_00_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:13:11 by pkettune          #+#    #+#             */
/*   Updated: 2022/08/28 20:15:32 by pkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*line(int l, char *str);

char	rush0(int x, int y)
{
	char	*point1;
	char	*point2;
	int		index;

	point1 = "o-o\n";
	point2 = "| |\n";
	index = 0;
	while (index <= y)
	{
		if (index == 0)
		{
			line(x, point1);
			index++;
		}
		else if (index == y)
			line(x, point1);
		else
			line(x, point2);
		index++;
	}
}

char	rush1(int x, int y)
{
	char	*point1;
	char	*point2;
	char	*point3;
	int		index;

	point1 = "*\\\n";
	point2 = "* *\n";
	point3 = "\\*//\n";
	index = 0;
	while (index <= y)
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
	}
}
char	rush2(int x, int y)
{
	char	*point1;
	char	*point2;
	char	*point3;
	int		index;

	point1 = "ABA\n";
	point2 = "B B\n";
	point3 = "CBC\n";
	index = 0;
	while (index <= y)
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
	}
}

char	rush3(int x, int y)
{
	char	*point1;
	char	*point2;
	char	*point3;
	int		index;

	point1 = "ABC\n";
	point2 = "B B\n";
	point3 = "ABC\n";
	index = 0;
	while (index <= y)
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
	}
}

char	rush4(int x, int y)
{
	char	*point1;
	char	*point2;
	char	*point3;
	int		index;

	point1 = "ABC\n";
	point2 = "B B\n";
	point3 = "CBA\n";
	index = 0;
	while (index <= y)
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
	}
}
