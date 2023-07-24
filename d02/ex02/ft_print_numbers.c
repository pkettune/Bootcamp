/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:46:57 by pkettune          #+#    #+#             */
/*   Updated: 2022/08/11 18:53:16 by pkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	zero;
	int	nine;

	zero = '0';
	nine = '9';
	while (zero < nine)
	{
		ft_putchar(zero);
		zero++;
	}
}
