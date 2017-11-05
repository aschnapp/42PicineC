/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 14:51:21 by aschnapp          #+#    #+#             */
/*   Updated: 2017/10/27 13:30:09 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	early;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	while (j < i / 2)
	{
		early = str[i - (j + 1)];
		str[i - (j + 1)] = str[j];
		str[j] = early;
		j++;
	}
	return (str);
}
