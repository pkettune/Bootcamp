/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 21:35:18 by pkettune          #+#    #+#             */
/*   Updated: 2022/08/11 23:34:38 by pkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
	
}

int main(void)
{
	int i;
	int j;
	int k;

	i = (j - 1);
	j = (k - 1);
	k = '2';

		while (i < j && j < k)
		{
					ft_putchar(i);
					ft_putchar(j);
					ft_putchar(k);
					ft_putchar(',');
					k++;
		}
}
