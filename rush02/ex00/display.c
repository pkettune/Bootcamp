/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:18:23 by pkettune          #+#    #+#             */
/*   Updated: 2022/08/28 20:15:42 by pkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>

void	**ft_display(char *storage[])
{
	int		ret;

	storage = (char *)malloc(sizeof(storage));

	ret = read(0, storage, storage);
	while (ret != '\0')
	{
		storage[ret] = '\0';
		write(1, storage, ret);
		ret = read(0, storage, storage);
	}
}

void	ft_check(int i, char **a)
{
	char	first;
	char	second;

	first = a[1][0];
	second = a[2][0];
	if (!(i = 3 || a[0][8] <= '4' || a[0][8] >='0'))	
		write (1, "none\n", 5);
}

int    ft_strcmp(char **buffer, void *(f)(int,int))
{
    int i;
    int j;
    int compare;
    
	i = 0;
	j = 0;
	while (j <=  )
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
    {
        i++;
    }
    if(s1[i] != s2[i])
        {
            compare = s1[i]-s2[i];
​
            return (compare);
        }
    else   
        return(0);
}

