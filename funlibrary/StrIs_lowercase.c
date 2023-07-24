/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Str_is_lowercase.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:05:50 by pkettune          #+#    #+#             */
/*   Updated: 2022/08/21 15:05:50 by pkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function that returns 1 if the string given as a parameter contains only lowercase alphabetical characters, and 0 if it contains any other character.

int ft_str_is_lowercase(char *str)
{
	while (str[0] != '\0')
	{
		if (!(str[0] >= 'a' && str[0] <= 'z'))
			return (0);
		str++;
	}
	return (1);
}