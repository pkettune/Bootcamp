/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:20:28 by pkettune          #+#    #+#             */
/*   Updated: 2022/08/28 20:15:37 by pkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	**store_array_array(char *str, int i, int j)
{
	char	**arrayarray;

	if (str[8] == '0')
		arrayarray = rush0(i, j);
	if (str[8] == '1')
		arrayarray = rush1(i, j);
	if (str[8] == '2')
		arrayarray = rush2(i, j);
	if (str[8] == '3')
		arrayarray = rush3(i, j);
	if (str[8] == '4')
		arrayarray = rush4(i, j);
	else
	write (1, "none\n", 5);

	return (arrayarray);
}
	


int	main(int argc, char **argv)
{
	char	*str;
	int		index;
	char	filenbr;

	filenbr = argv[0][8];
	index = 0;
	if (filenbr == '0' || filenbr == '1')
	{
		ft_check(argc, argv[0][8]);
		return (0);
	}
	while (filenbr >= '2' && filenbr <= '4')
	{

		return (0);
	}
}
