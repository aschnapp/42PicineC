/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 16:14:14 by aschnapp          #+#    #+#             */
/*   Updated: 2017/11/05 23:37:12 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#define STR char str[10]
#include <stdio.h>
int		validate_nine(char *nine)
{
	int *loc;

	if (!*nine)
		return (0);
	I;
	loc = malloc(sizeof(int) * 9);
	while (i < 9)
	{
		if (nine[i] == '.')
		{
			i++;
			continue;
		}
		if (loc[(int)(nine[i] - '0') - 1] != 1)
			loc[(int)(nine[i] - '0') - 1] = 1;
		else
		{
			free(loc);
			return (0);
		}
		i++;
	}
	free(loc);
	return (1);
}

int		validate_col(char **grid, int col)
{
	STR;
	I;
	while (i < 9)
	{
		str[i] = grid[i][col];
		i++;
	}
	str[i] = 0;
	return (validate_nine(str));
}

int		validate_cluster(char **grid, int row, int col)
{
	STR;
	I;
	J;
	K;
	L;
	M;
	j = (col / 3) * 3;
	while (l < 3)
	{
		m = 0;
		k = (row / 3) * 3;
		while (m < 3)
		{
			str[i] = grid[j][k];
			i++;
			k++;
			m++;
		}
		j++;
		l++;
	}
	str[i] = 0;
	return (validate_nine(str));
}
