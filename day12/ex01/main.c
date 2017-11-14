/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:11:23 by aschnapp          #+#    #+#             */
/*   Updated: 2017/11/08 20:12:54 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	error(char *av)
{
	int i;

	write(1, "cat: ", 5);
	_FOR(i = 0, av[i], i ++)
		write(1, &av[i], 1);
	write(1, ": ", 2);
	_IF(errno == ENOENT) {
		write(1, "No such file or directory\n", 25);
		return ;
	}
	_IF(errno == EACCES) {
		write(1, "Permission denied\n", 17);
		return ;
	}
	_IF(errno == EISDIR) {
		write(1, "Is a directory\n", 14);
		return ;
	}
	_IF(errno == EBUSY) {
		write(1, "Device or resource busy\n", 23);
		return;
	}
}

int		readFile(char *av)
{
	int		file;
	int		content;
	char	buffer[10];

	file = open(av, O_RDONLY);
	_IF(file == -1) {
		error(av);
		return (0);
	}
	while ((content = read(file, buffer, 10)))
	{
		write(1, buffer, content);
	}
	close(file);
	return (1);
}

int		main(int ac, char **av)
{
	int i;
	_FOR(i = 1, i < ac, i ++) {
		readFile(av[i]);
	}
}
