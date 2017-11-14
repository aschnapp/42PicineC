/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 20:25:16 by aschnapp          #+#    #+#             */
/*   Updated: 2017/11/07 20:39:31 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **l1, t_list *l2)
{
	t_list *start;

	start = *l1;
	if (!*l1)
	{
		*l1 = l2;
		return ;
	}
	if (!l2)
		return ;
	while (start->next)
		start = start->next;
	start->next = l2;
}
