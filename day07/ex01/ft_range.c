/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 13:12:12 by aschnapp          #+#    #+#             */
/*   Updated: 2017/11/02 16:08:39 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *dest;

	if (min >= max)
		return (NULL);
	i = 0;
	dest = malloc(sizeof(max - min));
	if (!dest)
		return (NULL);
	while (min < max)
	{
		dest[i] = min++;
		i++;
	}
	dest[i] = 0;
	return (dest);
}
