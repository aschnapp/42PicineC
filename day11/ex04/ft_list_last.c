/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:32:21 by aschnapp          #+#    #+#             */
/*   Updated: 2017/11/07 16:37:49 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *curr;

	curr = begin_list;
	if (!curr)
		return (curr);
	while (curr->next)
		curr = curr->next;
	return (curr);
}
