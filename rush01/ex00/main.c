/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 13:30:16 by aschnapp          #+#    #+#             */
/*   Updated: 2017/11/05 23:37:52 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#define INNER j=0;while(j<9){newgrid[i][j] = argv[i + 1][j];j++;}
#define OUTER(x) i=0;while(i < 9){x;newgrid[i][j] = 0;i++;}
#define MAL while(i < 9){newgrid[i] = malloc(sizeof(char *) * 10); i++;}
#include <stdio.h>

int		input_filter(int argc, char **argv)
{
	I;
	J;
	i += 1;
	if (argc != 10)
		return (0);
	while (i < argc)
	{
		while (argv[i][j])
			j++;
		if (j != 9)
			return (0);
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	char *newgrid[10];
	I;
	J;
	MAL;
	i = 0;
	if (!input_filter(argc, argv))
	{
		WRITE("Error\n", 6);
		return (0);
	}
	OUTER(INNER);
	solver(newgrid, 0, 0);
	// printgrid(argv);
}
