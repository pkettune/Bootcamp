/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:40:02 by etattevi          #+#    #+#             */
/*   Updated: 2022/08/21 19:18:12 by pkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPER_H
# define HELPER_H
# include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	get_corner(int nb)
//(int nb)value comes from...
//...get_corner <- possible <- fill <- solve <- main <- init_grid
//first x, after x is finished, y will come
{
	int	i;
	int	corner;

	i = 0;
	corner = 0;
	while (i < nb)//loops until it finds a number...
	{			  //...which must be divisible with 3 evenly.
		if ((i + 1) % 3 == 0)
			corner += 3;// and when it is, we add 3 to corner's value
		i++; //and start loop with bigger i value.
	}
	return (corner);//until i reaches nb. We then return...
}				//...the value of the corner (x or y)
	//lets go back to the check_square in main.h
#endif