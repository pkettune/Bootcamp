/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verify_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfarij <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:43:42 by omfarij           #+#    #+#             */
/*   Updated: 2022/08/30 13:43:48 by omfarij          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

int         ft_verif_chars(char *argv)
{
    int i;
    int ret;
    int f;
    int size_file;
    char *buf;
    char v;
    char o;
    char p;

    i = 0;
    ret = 0;
    v = ft_get_char_void(argv);
    o = ft_get_char_obst(argv);
    p = ft_get_char_full(argv);
    size_file = ft_size_file(argv);
    f = open(argv, O_RDONLY);
    ft_get_second_line(f);
    if ((buf = malloc(size_file * sizeof(char))) == NULL)
            return (0);
    while ((ret = read(f, buf, size_file)))
            buf[ret] = '\0';
    while (buf[i])
        {
            if (buf[i] != v && buf[i] != o && buf[i] != '\n')
                return (1);
            i++;
        }
    close(f);
    free(buf);
    return (0);
}

int             ft_get_next_columns(char *argv, int f)
{
    char *buf;
    int r;
    int size_file;

    r = 0;
    size_file = ft_size_file(argv);
    if ((buf = malloc(size_file * sizeof(char))) == NULL)
        return (0);
    while (read(f, &buf[r], 1))
    {
        if (buf[r] == '\n')
             break;
        r++;
    }
   free (buf);
   return (r + 1);
}

int         ft_verif_columns(char *argv)
{
    int i;
    int f;
    int r;
    int c;
    int l;

    i = 0;
    r = 0;
    c = ft_get_number_columns(argv);
    l = ft_get_number_lines(argv);
    f = open(argv, O_RDONLY);
    ft_get_second_line(f);
    while (i < l)
    {
        r = ft_get_next_columns(argv, f);
        if (r != c)
            return (1);
        i++;
    }
    close(f);
    return (0);
}

int         ft_verif_returns(char *argv)
{
    char *buf;
    int i;
    int f;
    int size_file;
    int ret;
    int c;

    i = 0;
    ret = 0;
    c = ft_get_number_columns(argv);
    size_file = ft_size_file(argv);
    f = open(argv, O_RDONLY);
    ft_get_second_line(f);
    if ((buf = malloc(size_file * sizeof(char))) == NULL)
        return (0);
    while ((ret = read(f, buf, c)))
    {
        if (buf[ret - 1] != '\n')
            return (1);
    }
    free(buf);
    close(f);
    return (0);
}
int        ft_verify_map(char *argv)
{
    if (ft_get_number_columns(argv) < 1 || ft_get_number_lines(argv) < 1)
    {
            ft_putstr("map error\n");
            return (1);
    }
    if (ft_verif_chars(argv) == 1 || ft_verif_returns(argv) == 1)
    {
            ft_putstr("map error\n");
            return (1);
    }
    if (ft_verif_columns(argv) == 1)
    {
            ft_putstr("map error\n");
            return (1);
    }
    return (0);
}
