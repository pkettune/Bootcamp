/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:08:28 by pkettune          #+#    #+#             */
/*   Updated: 2022/08/28 20:15:34 by pkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*rush_line(int length_col)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * length_col + 2);
	i = 0;
	while (i != '\0')
	{
		if (i == 0 || i == length_col - 1)
			str[i] = 'o';
		
		if (i > 0 || i < length_col- 1)
			str[i] = '-';	

		i++;
	}
	str[i] = '\n';
	str[i + 1] = '\0';
	return(str);
}

char	*rush_middle_line(int length_line)
{
	char	*str;
	int 	i;

	str = malloc(sizeof(char) * length_line + 2);
	i = 0;
	while (i != '\0')
	{
		if (i == 0 || i == length_line-1  )
			str[i] = '|';
		
		if ( i > 0 || i < length_line-1 )
			str[i] = ' ';

		i++;
	}
	str[i] = '\n';
	str[i + 1] = '\0';
	return (str);
}

char	*rush_total(int length_line, int length_col)
{
	char	*total;

	total = malloc(sizeof(((length_line + 1) * length_col) + 1));

	int i;
	i = 0;

	if (i = 0 || i == length_line -1)
		f1(length_line);
	
	if (i > 0 && i < length_col -1)
		f2(length_col);
	i++;

	total = ft_strcat();
	return(total);
}

char *ft_strcat(char *str, char *total, int *i)
{
	int 	j;

	j = 0;
	while (str[j] != '\0')
	{
		total[i][j] = str [j];
		j++;
	}
	str[j + 1] = '\0';
	return (str);
}

int	main(int argc, char **argv)
{
	char	*dest;
	char	*src;

	if (argc == 3)
	{
		rush_00_line(ft_atoi(argv[1]), dest);
		rush_00_middle_line(ft_atoi(argv[2]), src);
	}
	return (0);
}