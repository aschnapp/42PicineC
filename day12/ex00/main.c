/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:11:23 by aschnapp          #+#    #+#             */
/*   Updated: 2017/11/08 18:57:57 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		readFile(char *av)
{
	int		file;
	int		content;
	char	buffer[5];

	file = open(av, O_RDONLY);
	_IF(!file) return (0);
	while ((content = read(file, buffer, 5)))
	{
		write(1, buffer, content);
	}
	close(file);
	return (1);
}

int		main(int ac, char **av)
{
	_IF(ac < 2) {
		write(2, "File name missing.", 19);
		return (0);
	}
	_IF(ac > 2) {
		write(2, "Too many arguments.", 19);
		return (0);
	}
	readFile(av[1]);
	return (0);
}
