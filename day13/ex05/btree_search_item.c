/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:32:34 by aschnapp          #+#    #+#             */
/*   Updated: 2017/11/09 14:56:47 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *))
{
	void *output;

	output = NULL;
	if (!output && root->left)
		output = btree_search_item(root->left, data_ref, cmpf)
	if (!output && cmpf(root->item, data_ref))
		output = root->item;
	if (!output && root->right)
		output = btree_search_item(root->right, data_ref, cmpf);
	return output;
}
