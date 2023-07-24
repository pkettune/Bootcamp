/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:43:03 by pkettune          #+#    #+#             */
/*   Updated: 2022/08/23 21:25:49 by pkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_LIST_H__//protect from double references
#define __FT_LIST_H__

typedef struct 		s_list//main struct
{
	struct s_list	*next;
	void			*data;
}					t_list;//using this to make "copy"

t_list ft_create_elem(void *data);//prototype777777
#endif
