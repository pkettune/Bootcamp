/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 19:28:20 by pkettune          #+#    #+#             */
/*   Updated: 2022/08/24 20:48:36 by pkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*sptr;

	sptr = (t_list *)malloc(sizeof(t_list));
	if (sptr)
	{
	sptr->data = data;
	sptr->next = NULL;
	}
	return (sptr);
}
