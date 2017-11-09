/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouzard <ehouzard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:45:39 by ehouzard          #+#    #+#             */
/*   Updated: 2017/11/08 17:43:12 by ehouzard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#define BUF_SIZE 10

int		ft_error(int ac)
{
	if (ac < 2)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	else if (ac > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	else
		return (0);
}

int		main(int argc, char **argv)
{
	int		fd;
	int		re;
	char	*buf[BUF_SIZE + 1];

	fd = open(argv[1], O_RDONLY);
	if (ft_error(argc))
		return (1);
	if (fd == -1)
	{
		ft_putstr("open() failed\n");
		return (1);
	}
	while ((re = read(fd, buf, BUF_SIZE)))
	{
		write(1, buf, re);
	}
	if (close(fd) == -1)
	{
		ft_putstr("close() failed\n");
		return (1);
	}
	return (0);
}
