/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 00:29:28 by pkettune          #+#    #+#             */
/*   Updated: 2022/08/25 22:53:21 by pkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "writer.h"
#define BUF_SIZE 4096

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_fd(int fd, char *str)
{
	write(fd, str, ft_strlen(str));
}

int	main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (argc > 2)
		write(1, "Too many arguments.\n", 21);
	if (argc < 2)
		write(1, "File name missing.\n", 22);
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		ret = read(fd, buf, BUF_SIZE);
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	return (0);
}

//open: "file name", opening mode O_RDONLY.
//open returns an integer... (-1 for error)
//...corresponding to open file description...
//...  = fd
//open opened argv[1] and threw it in the buffer (fd)
//
//fd is kind of address to the buffer so we're able to read/write/lseek...
//
//read: (fd, output buffer "buf", int "BUF_SIZE")
//int (BUF_SIZE) = number of bytes needed to read.
//
//read returns number of bytes (-1 for error) that have been red......
//... = ret
// ret = buffer size, buf = [BUF_SIZE + 1])
//  buf is one byte bigger than ret so we can add null...
//...to the end of the buf. 