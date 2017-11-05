/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 14:51:34 by aschnapp          #+#    #+#             */
/*   Updated: 2017/10/26 16:45:30 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	char i;
	char j;

	i = 0;
	j = i + 1;
	while (i < 99)
	{
		while (j < 100)
		{
			ft_putchar((char)(i / 10) + 48);
			ft_putchar((char)(i % 10) + 48);
			ft_putchar(' ');
			ft_putchar((char)(j / 10) + 48);
			ft_putchar((char)(j % 10) + 48);
			if (i != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}
