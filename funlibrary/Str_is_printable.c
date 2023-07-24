/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Str_is_printable.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:08:21 by pkettune          #+#    #+#             */
/*   Updated: 2022/08/21 15:08:21 by pkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Create a function that returns 1 if the string given as a parameter contains only printable characters, and 0 if it contains any other character.

int ft_str_is_printable(char *str)
{
	while (str[0] != '\0')
	{
		if (!(str[0] >= 32 && str[0] <= 126))
			return (0);
		str++;
	}
	return (1);
}