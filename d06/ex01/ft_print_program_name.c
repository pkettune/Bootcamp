/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 21:23:50 by pkettune          #+#    #+#             */
/*   Updated: 2022/08/18 15:29:06 by pkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	index;

	index = 0;
	while (argv[0][index] != '\0' && argc)
	{
		ft_putchar(argv[0][index]);
		index++;
	}
	ft_putchar('\n');
	return (0);
}
