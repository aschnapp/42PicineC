/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:08:10 by aschnapp          #+#    #+#             */
/*   Updated: 2017/11/07 16:29:52 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *curr;
	t_list *tmp;

	tmp = ft_create_elem(data);
	if (*begin_list == NULL)
	{
		*begin_list = tmp;
		return ;
	}
	if (tmp == NULL)
		return ;
	curr = *begin_list;
	if (curr)
	{
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = tmp;
	}
}
