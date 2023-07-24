/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:58:30 by jimmonen          #+#    #+#             */
/*   Updated: 2022/09/01 17:13:28 by pkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

void	ft_putchar(char c);
void	rush00(int x, int y);
void	rush01(int x, int y);
void	rush02(int x, int y);
void	rush03(int x, int y);
void	rush04(int x, int y);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

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

int	main(int argc, char **argv)
{
	int 	i;
	int 	j;
	int 	fd;

	i = argv[2][0] - '0';
	j = argv[3][0] - '0';

	if ((strcmp(argv[1], "rush00")) == 0)
		rush00(i, j);
	if ((strcmp(argv[1], "rush01")) == 0)
		rush01(i, j);
	if ((strcmp(argv[1], "rush02")) == 0)
		rush02(i, j);
	if ((strcmp(argv[1], "rush03")) == 0)
		rush03(i, j);
	if ((strcmp(argv[1], "rush04")) == 0)
		rush04(i, j);	
	return (0);
}
