/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_solution.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfarij <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:16:18 by omfarij           #+#    #+#             */
/*   Updated: 2022/08/30 13:16:41 by omfarij          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

char            **ft_fill_map(char **map, int c, int l, char o, char p)
{
    int i;
    int r;
    int length;
    int pos;

    length = ft_biggest_square(map, c, l, o);
    pos = ft_find_position_square(map, c, l, o);
    i = (pos / (c - 1)) - length + 1;
    while (i < (pos / (c - 1)) + 1)
    {
        r = (pos % (c -1)) - length + 1;
        while (r < (pos % (c -1)) + 1)
        {
            map[i][r] = p;
            r++;
        }
        i++;
    }
    return (map);
}

void         ft_print_solution(int i, char **argv)
{
    int f;
    char **map = NULL;
    int r;
    int c;
    int l;
    char o;
    char p;

    r = 0;
    o = ft_get_char_obst(argv[i]);
    p = ft_get_char_full(argv[i]);
    c = ft_get_number_columns(argv[i]);
    l = ft_get_number_lines(argv[i]);
    f = open (argv[i], O_RDONLY);
    if (f >= 0)
    {
        map = ft_read_file(argv[i]);
    }
    ft_fill_map(map, c, l, o, p);
    while (r < l)
    {
        ft_putstr(map[r]);
        ft_putchar('\n');
        r++;
    }
    free(map);
    close (f);
}

int         main(int argc, char ** argv)
{
    int i;

    i = 1;
    if (argc > 1)
    {
        while (i < argc)
        {
            if ((ft_verify_map(argv[i])) == 1)
                ;
            else
            {
                ft_print_solution(i, argv);
            }
            i++;
        }
    }
    else
        return (0);
}
