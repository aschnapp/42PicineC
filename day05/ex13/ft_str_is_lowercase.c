/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 21:32:57 by aschnapp          #+#    #+#             */
/*   Updated: 2017/10/31 14:27:56 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_lower(char c);

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!is_lower(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int		is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
