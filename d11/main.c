/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 21:14:51 by pkettune          #+#    #+#             */
/*   Updated: 2022/08/24 23:27:21 by pkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	main(void)
{
	t_list	**pptr;
	void	*ptr;
	ptr = 0;
	ft_list_push_back(pptr, ptr);
	return(0);
}