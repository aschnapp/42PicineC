/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 21:32:57 by aschnapp          #+#    #+#             */
/*   Updated: 2017/10/31 14:28:45 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_upper(char c);

int		ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!is_upper(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int		is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
