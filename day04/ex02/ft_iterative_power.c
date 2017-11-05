/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 14:55:48 by aschnapp          #+#    #+#             */
/*   Updated: 2017/10/28 14:56:39 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;

	if (nb <= 0 || power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = nb;
	while (--power)
		i *= nb;
	return (i);
}
