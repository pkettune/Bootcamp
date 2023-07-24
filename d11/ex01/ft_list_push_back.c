/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:31:15 by pkettune          #+#    #+#             */
/*   Updated: 2022/08/24 23:36:15 by pkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*ptr;
	t_list	**pptr;

	ptr = NULL;
	pptr = NULL;

	if (begin_list)
	{
	ptr = &begin_list;
	**pptr = (ft_create_elem(data));
	ptr->data = pptr;	
	}
}
