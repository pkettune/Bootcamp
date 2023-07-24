/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 19:28:20 by pkettune          #+#    #+#             */
/*   Updated: 2022/08/23 21:25:10 by pkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"

t_list	*ft_create_elem(void *data)//777777
{
	t_list *new;//creating "new" = t_list struct reference

	new = malloc(sizeof(t_list));//giving size to it
	if (new)
	{
	new->data = data;//assigning void *data to struct "new"
	new->next = NULL;//assigning NULL to new's struct "next"
	}
	return new;
}
