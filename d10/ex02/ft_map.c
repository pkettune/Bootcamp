/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:09:50 by pkettune          #+#    #+#             */
/*   Updated: 2022/08/22 20:59:13 by pkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*array;

	i = 0;
	array = (int *)malloc(sizeof(int) * length);
	if (array == NULL)
		return (NULL);
	while (i <= length)
	{
		array[i] = f(tab[i]);
		i++;
	}
	return (array);
}
