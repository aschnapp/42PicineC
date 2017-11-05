/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 16:00:38 by aschnapp          #+#    #+#             */
/*   Updated: 2017/11/03 16:00:39 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int length)
{
	int index;
	int max;

	index = 0;
	max = 0;
	while (index < length)
	{
		if (tab[index] > max)
			max = tab[index];
		index++;
	}
	return (max);
}
