/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 20:00:52 by aschnapp          #+#    #+#             */
/*   Updated: 2017/11/06 21:50:08 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define I int i = 0
#define O int o = 0
#define _FOR(x,y,z) for((x); (y); (z))
#define _IF(x) if(x)
#include <stdio.h>

int		ft_atoi(char *str);
int		add(int i, char *sign, int j);
void	ft_putchar(char c);
void	ft_putnbr(int nb);

int		main(int arc, char **arv)
{
	I;
	O;
	if (arc != 4)
		return (0);
	i = ft_atoi(arv[1]);
	o = ft_atoi(arv[3]);
	ft_putnbr(add(i, arv[2], o));
	return (0);
}

int		add(int i, char *sign, int j)
{
	O;
	_FOR(o = 0, sign[o], o++);
	_IF(o > 1) return (0);
	_IF(sign[0] == '+') return (i + j);
	_IF(sign[0] == '-') return (i - j);
	_IF(sign[0] == '*') return (i * j);
	_IF(sign[0] == '/') return (i / j);
	_IF(sign[0] == '%') return (i % j);
	return (0);
}

int		ft_atoi(char *str)
{
	int sign;

	I;
	O;
	sign = 1;
	while ((str[i] == ' ') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\r')
		|| (str[i] == '\f') || (str[i] == '\t'))
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		o *= 10;
		o += (str[i] - 48);
		i++;
	}
	return (o * sign);
}

void	ft_putnbr(int nb)
{
	unsigned int n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = nb * -1;
	}
	else
		n = nb;
	if (n < 10)
	{
		ft_putchar(n + '0');
		return ;
	}
	ft_putnbr(n / 10);
	ft_putnbr(n % 10);
}

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
