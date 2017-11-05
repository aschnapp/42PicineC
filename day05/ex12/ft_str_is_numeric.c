/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 21:29:43 by aschnapp          #+#    #+#             */
/*   Updated: 2017/10/31 14:27:11 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_num(char c);

int		ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!is_num(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int		is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
