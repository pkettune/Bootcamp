/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_chars.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfarij <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:47:56 by omfarij           #+#    #+#             */
/*   Updated: 2022/08/30 13:14:56 by omfarij          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"


char            ft_get_char_void(char *argv)
{
    int i;
    char *buf;
    int f;
    char v;

    i = 0;
    f = open(argv, O_RDONLY);
    if ((buf = malloc(80 * sizeof(char))) == NULL)
        return (0);
    while (read(f, &buf[i], 1))
    {
        if (buf[i] == '\n')
            break;
        i++;
    }
    v = buf[i - 3];
    free (buf);
    close(f);
    return (v);
}

char            ft_get_char_obst(char *argv)
{
    int i;
    char *buf;
    int f;
    char o;

    i = 0;
    f = open(argv, O_RDONLY);
    if ((buf = malloc(80 * sizeof(char))) == NULL)
        return (0);
    while (read(f, &buf[i], 1))
    {
        if (buf[i] == '\n')
            break;
        i++;
    }
    o = buf[i - 2];
    free (buf);
    close(f);
    return (o);
}

char            ft_get_char_full(char *argv)
{
    int i;
    char *buf;
    int f;
    char p;

    i = 0;
    f = open(argv, O_RDONLY);
    if ((buf = malloc(80 * sizeof(char))) == NULL)
        return (0);
    while (read(f, &buf[i], 1))
    {
        if (buf[i] == '\n')
            break;
        i++;
    }
    p = buf[i - 1];
    free (buf);
    close(f);
    return (p);
}
