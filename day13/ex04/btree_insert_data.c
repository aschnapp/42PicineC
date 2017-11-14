/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:19:32 by aschnapp          #+#    #+#             */
/*   Updated: 2017/11/09 14:31:14 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	t_btree *curr;

	if (!*root)
	{
		*root = btree_create_node(item);
		return ;
	}
	curr = *root;
	if (cmpf(item, curr->item) >= 0)
	{
		if (curr->right)
			btree_insert_data(&curr->right, item, cmpf)
		else
			curr->right = btree_insert_node(item);
	}
	if (cmpf(item, curr->item) < 0)
	{
		if (curr->left)
			btree_insert_data(&curr->left, item, cmpf)
		else
			curr->left = btree_insert_node(item);
	}
}
