/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_solution.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfarij <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:14:03 by omfarij           #+#    #+#             */
/*   Updated: 2022/08/30 13:14:19 by omfarij          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

int         ft_min(int a, int b, int c)
{
    if (a <= b && a <= c) {
        return a;
    } else if (b <= a && b <= c) {
        return b;
    } else {
        return c;
    }
}

int            **ft_generate_map(int l, int c)
{
    int **map2;
    int i;

    i = 0;
    if ((map2 = malloc(l * sizeof(int*))) == NULL)
        return NULL;
    while (i < l)
    {
        if ((map2[i] = malloc(c * sizeof(int))) == NULL)
            return NULL;
        i++;
    }
    return (map2);
}
int             ft_biggest_square(char **map, int c, int l, char o)
{
    int i;
    int r;
    int **c_m = NULL;
    int count_max;

    i = 0;
    count_max = 0;
    c_m = ft_generate_map(l, c);
    while (i < l)
    {
        r = 0;
        while (r < c - 1)
        {
            if (map[i][r] == o)
                c_m[i][r] = 0;
            else if (i == 0 || r == 0)
                c_m[i][r] = 1;
            else
                c_m[i][r] = ft_min(c_m[i-1][r], c_m[i][r-1], c_m[i-1][r-1]) + 1;
            if (c_m[i][r] > count_max)
                count_max = c_m[i][r];
            r++;
        }
        i++;
    }
    free(c_m);
    return (count_max);
}

int             ft_find_position_square(char **map, int c, int l, char o)
{
    int i;
    int r;
    int **c_m = NULL;
    int count_max;
    int p;

    i = 0;
    p = 0;
    count_max = ft_biggest_square(map, c, l, o);
    c_m = ft_generate_map(l, c);
    while (i < l)
    {
        r = 0;
        while (r < c - 1)
        {
            if (map[i][r] == o)
                c_m[i][r] = 0;
            else if (i == 0 || r == 0)
                c_m[i][r] = 1;
            else
                c_m[i][r] = ft_min(c_m[i-1][r], c_m[i][r-1], c_m[i-1][r-1]) + 1;
            if (c_m[i][r] == count_max)
            {
                p = i * (c - 1) + r;
                break;
            }
            r++;
        }
        i++;
    }
    free(c_m);
    return (p);
}
