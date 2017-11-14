/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 18:46:34 by aschnapp          #+#    #+#             */
/*   Updated: 2017/11/07 19:42:16 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *next;
	t_list *this;

	next = *begin_list;
	while (next)
	{
		this = next;
		next = next->next;
		free(this);
	}
	*begin_list = NULL;
}
