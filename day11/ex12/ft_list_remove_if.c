/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 20:11:03 by aschnapp          #+#    #+#             */
/*   Updated: 2017/11/07 20:39:43 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#define POINTS t_list *prev; t_list *curr; t_list *tmp

void	ft_list_remove_if(t_list **bl, void *data_ref, int (*cmp)())
{
	POINTS;
	curr = *bl;
	prev = NULL;
	tmp = NULL;
	if (!*bl)
		return ;
	while (curr)
	{
		if (!cmp(curr->data, data_ref))
		{
			if (curr == *bl)
			{
				*bl = curr->next;
				curr = curr->next;
				continue;
			}
			prev->next = curr->next;
			tmp = curr;
			curr = curr->next;
			free(tmp);
			continue;
		}
		prev = curr;
		curr = curr->next;
	}
}
