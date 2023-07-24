/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StringComparison                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:40:06 by pkettune          #+#    #+#             */
/*   Updated: 2022/08/21 13:42:27 by pkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		++s1;
		++s2;
	}
	return ((int)(unsigned char)(*s1) - (int)(unsigned char)(*s2));
}


int	main(void)
{
	char	*ptr1;
	char	*ptr2;
	int		result;

	ptr1 = "asdf";
	ptr2 = "asdf";
	result = ft_strcmp(ptr1, ptr2);
		if (result == 0)
			printf("strings are equal");
		else
			printf("strings are unequal");
			return(0);
}