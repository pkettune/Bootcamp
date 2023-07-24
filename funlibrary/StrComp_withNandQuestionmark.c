/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:24:09 by pkettune          #+#    #+#             */
/*   Updated: 2022/08/21 14:51:34 by pkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned n)
{
	int i;
	
	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}

int	main(void)
{
	char	*ptr1;
	char	*ptr2;
	int		result;

	ptr1 = "asdfa";
	ptr2 = "asdfab";
	result = ft_strncmp(ptr1, ptr2, 6);
		if (result == 0)
			printf("strings are equal");
		else
			printf("strings are unequal");
			return(0);
}

//															  ?											(RETURN can be int or any operator)
//    for ( ; n > 0; s1++, s2++, --n)						 IF	           (...s1 < ...s2   IS TRUE )              RETURN VALUE -1   ELSE  +1        
//	if (*s1 != *s2)  									      ?    ((*(unsigned char *)s1 < *(unsigned char *)s2) ? -1                :    +1);
//	    return ((*(unsigned char *)s1 < *(unsigned char *)s2) ? -1 : +1);
//	else if (*s1 == '\0')
//	    return 0;
//  return 0;
//}