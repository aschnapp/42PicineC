/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 20:18:16 by aschnapp          #+#    #+#             */
/*   Updated: 2017/10/31 14:25:44 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_lower(char c);
int		is_alpha_num(char c);
int		is_upper(char c);

char	*ft_strcapitalize(char *str)
{
	int flag;
	int i;

	flag = 1;
	i = 0;
	while (str[i])
	{
		if (!is_alpha_num(str[i]))
			flag = 1;
		if (!flag && is_upper(str[i]))
			str[i] += 32;
		if (flag && is_alpha_num(str[i]) && is_lower(str[i]))
		{
			str[i] -= 32;
			flag = 0;
		}
		if (flag && is_alpha_num(str[i]) && !is_lower(str[i]))
			flag = 0;
		i++;
	}
	return (str);
}

int		is_alpha_num(char c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int		is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
