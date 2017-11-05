/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 13:47:17 by aschnapp          #+#    #+#             */
/*   Updated: 2017/10/26 16:36:10 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	putchars(char i, char j, char k);

void	ft_print_comb(void)
{
	int i;
	int k;
	int j;

	i = '0' - 1;
	while (++i <= '7')
	{
		j = '0';
		while (j <= '8')
		{
			if (++j <= i)
				continue;
			k = '2';
			while (k <= '9')
			{
				if (k <= j || k <= i)
				{
					k++;
					continue;
				}
				putchars(i, j, k);
				k++;
			}
		}
	}
}

void	putchars(char i, char j, char k)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
	if (i == '7' && j == '8' && k == '9')
		return ;
	ft_putchar(',');
	ft_putchar(' ');
}
