/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StrCatL.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:14:16 by pkettune          #+#    #+#             */
/*   Updated: 2022/08/21 15:14:16 by pkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
SYNOPSIS
     #include <string.h>

     size_t
     strlcat(char * restrict dst, const char * restrict src, size_t dstsize);

DESCRIPTION
     The strlcpy() and strlcat() functions copy and concatenate strings with
     the same input parameters and output result as snprintf(3).  They are
     designed to be safer, more consistent, and less error prone replacements
     for the easily misused functions strncpy(3) and strncat(3).

     strlcpy() and strlcat() take the full size of the destination buffer and
     guarantee NUL-termination if there is room.  Note that room for the NUL
     should be included in dstsize.

     strlcat() appends string src to the end of dst.  It will append at most
     dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
     dstsize is 0 or the original dst string was longer than dstsize (in prac-
     tice this should not happen as it means that either dstsize is incorrect
     or that dst is not a proper string).

     If the src and dst strings overlap, the behavior is undefined.
*/

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned	int i;
	unsigned	int j;
	unsigned	int k;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	k = 0;
	while (src[k] != '\0')
		k++;
	return (k + size);
}