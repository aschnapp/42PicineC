/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 18:56:56 by aschnapp          #+#    #+#             */
/*   Updated: 2017/11/07 19:19:22 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*start;
	t_list	*tmp;

	start = NULL;
	while (*begin_list)
	{
		tmp = (*begin_list)->next;
		(*begin_list)->next = start;
		start = *begin_list;
		*begin_list = tmp;
	}
	*begin_list = start;
}
