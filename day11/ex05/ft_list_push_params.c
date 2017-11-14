/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:37:31 by aschnapp          #+#    #+#             */
/*   Updated: 2017/11/07 19:41:30 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int c, char **av)
{
	t_list *tmp;
	t_list *start;

	if (c <= 1)
		return (NULL);
	start = ft_create_elem(av[c - 1]);
	tmp = start;
	c -= 2;
	while (c > 0)
	{
		tmp->next = ft_create_elem(av[c]);
		tmp = tmp->next;
		c--;
	}
	return (start);
}
