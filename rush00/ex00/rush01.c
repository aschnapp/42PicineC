/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 19:22:05 by aschnapp          #+#    #+#             */
/*   Updated: 2017/10/28 23:15:57 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	print_row(int x, char s, char e, char m);

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	print_row(x, '/', '*', '\\');
	y -= 1;
	while (y > 1)
	{
		print_row(x, '*', ' ', '*');
		y--;
	}
	if (y == 1)
		print_row(x, '\\', '*', '/');
}

/*
** s = start, m = mid e = end
*/

void	print_row(int len, char s, char m, char e)
{
	ft_putchar(s);
	len -= 1;
	while (len > 1)
	{
		ft_putchar(m);
		len--;
	}
	if (len == 1)
		ft_putchar(e);
	ft_putchar('\n');
}
