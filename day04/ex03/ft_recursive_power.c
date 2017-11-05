/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 14:57:14 by aschnapp          #+#    #+#             */
/*   Updated: 2017/10/28 14:57:57 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (nb <= 0 || power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb *= ft_recursive_power(nb, --power));
}
