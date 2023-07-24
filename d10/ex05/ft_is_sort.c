/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:23:42 by pkettune          #+#    #+#             */
/*   Updated: 2022/08/23 19:15:19 by pkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < length + 1)
	{
		if ((*f)(tab[i], tab[i + 1]) >= 0)
		{
			j++;
		}
		if ((*f)(tab[i], tab[i + 1]) <= 0)
		{
			k++;
		}
		i++;
	}
	if (length == j || length == k)
		return (1);
	else
		return (0);
}
