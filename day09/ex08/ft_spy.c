/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 10:55:40 by aschnapp          #+#    #+#             */
/*   Updated: 2017/11/03 11:55:18 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define ALERT write(1, "Alert!!!", 9); return (0)
#define I int i = 0;
#define J int j = 0;
#define RCHECK(x) ((x) != ' ' && (x) != '\n' && (x) != '\r' && (x) != '\t')

int		ft_strcmp(char *s1, char *s2);

char *skip_space(*str)
{
	I
	while (str[i])
	{
	}
}

int		main(int arc, char **arv)
{

	I
	while (arv[i])
	{
		if (!ft_strcmp(arv[i]), "Bauer")
			ALERT;
		if(!ft_strcmp(arv[i]), "attack")
			ALERT;
		if (!ft_strcmp(arv[i]), "president")
			ALERT;
		i++;
	}
	return (0);
}

int		ft_strcmp(char *s1, char *s2)
{
	I;
	while ((s1[i] == s2[i]) && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}
