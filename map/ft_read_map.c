/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfarij <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:48:17 by omfarij           #+#    #+#             */
/*   Updated: 2022/08/30 16:48:25 by omfarij          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

int             ft_size_file(char *argv)
{
    int size;
    char buf;
    int f;

    size = 0;
    f = open(argv, O_RDONLY);
    while (read(f, &buf, 1))
    {
        size++;
    }
    close(f);
    return (size);
}

int            ft_get_number_lines(char *argv)
{
    int i;
    char *buf;
    int nb_l;
    int f;

    i = 0;
    nb_l = 0;
    f = open(argv, O_RDONLY);
    if ((buf = malloc(80 * sizeof(char))) == NULL)
        return (0);
    while (read(f, &buf[i], 1))
    {
        if (buf[i] > 58 || buf[i] < 47)
            break;
        nb_l = nb_l * 10 + (buf[i] - 48);
        i++;
    }
    free (buf);
    close(f);
    return (nb_l);
}

int             ft_get_number_columns(char *argv)
{
    char *buf;
    int r;
    int size_file;
    int f;

    r = 0;
    f = open(argv, O_RDONLY);
    size_file = ft_size_file(argv);
    ft_get_second_line(f);
    if ((buf = malloc(size_file * sizeof(char))) == NULL)
        return (0);
    while (read(f, &buf[r], 1))
    {
        if (buf[r] == '\n')
             break;
        r++;
    }
   free (buf);
   close(f);
   return (r + 1);
}

void            ft_get_second_line(int f)
{
    int i;
    char *buf;

    i = 0;
    if ((buf = malloc(4096 *sizeof(char))) == NULL)
        return;
    while (read(f, &buf[i], 1))
    {
        if (buf[i] == '\n')
            break;
        i++;
    }
}

char            **ft_read_file(char *argv)
{
    char **buf;
    int i;
    int f;
    int c;
    int ret;
    int l;

    i = 0;
    ret = 0;
    c = ft_get_number_columns(argv);
    l = ft_get_number_lines(argv);
    f = open(argv, O_RDONLY);
    ft_get_second_line(f);
    if ((buf = malloc(l * sizeof(char*))) == NULL)
        return NULL;
    while (i < l)
    {
        if ((buf[i] = malloc(c * sizeof(char))) == NULL)
            return NULL;
        i++;
    }
    i = 0;
    while (i < l)
    {
        if ((ret = read(f, buf[i], c)) == - 1)
            return NULL;
        buf[i++][c - 1] = '\0';
    }
    close (f);
    return (buf);
}
