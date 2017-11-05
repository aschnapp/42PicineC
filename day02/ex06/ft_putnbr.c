/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 18:58:50 by aschnapp          #+#    #+#             */
/*   Updated: 2017/10/25 19:55:16 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);
#include <stdio.h>

void ft_putnbr(int nb) {
	int temp[12];
	int j;
	j = 0;
	while ((nb != 0) || (j > 11)) {
		temp[j] = nb % 10;
		nb /= 10;
		j ++;
	}
	j -= 1;
	while (j >= 0) {
		printf("%d %d %c \n\n", temp[j], j, (char)temp[j]);
		ft_putchar((char)temp[j]);
		j --;
	}
}