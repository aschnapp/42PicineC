/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 22:54:35 by aschnapp          #+#    #+#             */
/*   Updated: 2017/11/03 11:42:13 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define CHECK(x) ((x) == ' ' || (x) == '\n' || (x) == '\r' || (x) == '\t')
#define RCHECK(x) ((x) != ' ' && (x) != '\n' && (x) != '\r' && (x) != '\t')
#define DECL int i = 0,j = 0,k = 0

char	**ft_split_whitespaces(char *str);

void	output_size(char *str, char ***output)
{
	int i;
	int size;

	size = 0;
	i = 0;
	while (str[i])
	{
		if (CHECK(str[i]))
		{
			size++;
			i++;
			while (str[i] && CHECK(str[i]))
				i++;
		}
		else
			i++;
	}
	if (RCHECK(str[i - 1]))
		size++;
	*output = malloc((size + 1) * sizeof(char *));
}

void	item_size(char *str, char **output)
{
	int i;
	int j;
	int size;

	i = 0;
	j = 0;
	size = 0;
	while (str[i])
	{
		if (RCHECK(str[i]))
			size++;
		if (CHECK(str[i]) && size)
		{
			output[j] = malloc(size + 1);
			j++;
			size = 0;
		}
		i++;
	}
	if (RCHECK(str[i - 1]))
		output[j] = malloc(size + 1);
}

void	fill(char *str, char **output)
{
	DECL;
	while (str[i])
	{
		if (RCHECK(str[i]) && str[i])
		{
			output[j][k] = str[i];
			k++;
		}
		if (CHECK(str[i]) && k && str[i])
		{
			output[j][k] = 0;
			k = 0;
			j++;
		}
		i++;
	}
	if (RCHECK(str[i - 1]))
	{
		output[j][k] = 0;
		output[j + 1] = (char *)NULL;
	}
	else
		output[j] = (char *)NULL;
}

int		nullstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (RCHECK(str[i]))
			return (0);
		i++;
	}
	return (1);
}

char	**ft_split_whitespaces(char *str)
{
	char **output;

	output = NULL;
	output = malloc(1 * sizeof(char *));
	output[0] = NULL;
	if (nullstr(str))
		return (output);
	output_size(str, &output);
	item_size(str, output);
	fill(str, output);
	return (output);
}
