/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 14:51:23 by aschnapp          #+#    #+#             */
/*   Updated: 2017/10/28 14:54:02 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int accum;

	accum = 1;
	i = 1;
	if (nb > 12 || nb < 0)
		return (0);
	while (++i <= nb)
		accum *= i;
	return (accum);
}
