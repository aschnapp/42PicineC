/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 13:18:57 by aschnapp          #+#    #+#             */
/*   Updated: 2017/11/12 20:27:17 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int				ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (i);
}

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char			*shify(char *in)
{
	int		len;
	char	*str;

	str = malloc(ft_strlen(in) + 64);
	len = ft_strcpy(str, "echo $((");
	len += ft_strcpy(str + len, in);
	ft_strcpy(str + len, "))");
	return (str);
}

long long		eval_expr(char *in)
{
	int		ret;
	char	*args[4];

	(void)ret;
	args[0] = "/bin/sh";
	args[1] = "-c";
	args[2] = shify(in);
	args[3] = NULL;
	WRAPPER(args);
	return (0);
}
