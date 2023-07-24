/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StrCat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:09:32 by pkettune          #+#    #+#             */
/*   Updated: 2022/08/21 15:09:32 by pkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
     The strcat() and strncat() functions append a copy of the null-terminated
     string s2 to the end of the null-terminated string s1, then add a termi-
     nating `\0'.  The string s1 must have sufficient space to hold the
     result.

     The strncat() function appends not more than n characters from s2, and
     then adds a terminating `\0'.

     The source and destination strings should not overlap, as the behavior is
     undefined.

RETURN VALUES
     The strcat() and strncat() functions return the pointer s1.
*/

char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}