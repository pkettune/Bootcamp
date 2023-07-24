/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 21:14:51 by pkettune          #+#    #+#             */
/*   Updated: 2022/08/24 23:36:20 by pkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data);

int	main(void)
{
	t_list	**pptr;
	void	*ptr;
	ptr = 0;
	ft_list_push_back(pptr, ptr);
	return(0);
}