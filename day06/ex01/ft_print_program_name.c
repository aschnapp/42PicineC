/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 11:35:15 by aschnapp          #+#    #+#             */
/*   Updated: 2017/10/31 14:14:31 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int arc, char **arv)
{
	if (arc > 0)
	{
		while (*arv[0])
			ft_putchar(*arv[0]++);
		ft_putchar('\n');
	}
}
