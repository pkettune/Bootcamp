/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:45:42 by pkettune          #+#    #+#             */
/*   Updated: 2022/08/18 17:55:56 by pkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*new;
	int		pituus;
	int		i;

	pituus = 0;
	i = 0;
	while (src[pituus] != '\0')
		pituus++;
	new = malloc(sizeof(char) * pituus + 1);
	while (i < pituus)
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
