/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 19:03:58 by aschnapp          #+#    #+#             */
/*   Updated: 2017/11/02 16:14:58 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		findsize(int total, char **argv)
{
	int size;

	size = 0;
	total -= 1;
	while (total > 0)
	{
		size += sizeof(argv[total]);
		total--;
	}
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		totalsize;
	char	*output;
	int		i;
	int		j;
	int		k;

	totalsize = findsize(argc, argv);
	output = malloc(totalsize);
	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			output[k] = argv[i][j];
			j++;
			k++;
		}
		if (argv[i + 1] && !argv[i][j])
			output[k++] = '\n';
		i++;
	}
	return (output);
}
