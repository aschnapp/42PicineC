/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 21:42:30 by aschnapp          #+#    #+#             */
/*   Updated: 2017/11/05 23:47:48 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#define MAL while(i < 9){newgrid[i] = malloc(sizeof(char *) * 10); i++;}
#define INNER j=0;while(j<9){newgrid[i][j] = grid[i][j];j++;}
#define OUTER(x) i=0;while(i < 9){x;newgrid[i][j] = 0;i++;}
#include <stdio.h>

int		solver(char **grid, int start, int end)
{
	char *newgrid[9];
	I;
	J;
	MAL;
	OUTER(INNER);
	i = 0;
	while(start < 9)
	{
		while (end < 9)
		{
			if (newgrid[start][end] != '.')
			{
				end++;
				continue;
			}
			j = 1;
			while (j < 10)
			{
				newgrid[start][end] = '0' + j;
				// printf("%d %d %d\n", validate_cluster(newgrid, end, start), validate_col(newgrid, start), validate_nine(newgrid[start]));
				// printgrid(newgrid);
				printf("%d %d %d\t", start, end, j);
				if (validate_cluster(newgrid, end, start) && validate_col(newgrid, start) && validate_nine(newgrid[start])) {
					solver(newgrid, start, end + 1);
				}
				newgrid[start][end] = '.';
				j++;
			}
			end++;
		}
		end=0;
		start++;
	}
	return(0);
}