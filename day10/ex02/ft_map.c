/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:04:06 by aschnapp          #+#    #+#             */
/*   Updated: 2017/11/06 18:40:44 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define CO int i=0;int*output;output = malloc(sizeof(int) * length)
#define DE while (i < length){output[i] = f(tab[i]);i++;}return(output)

int		*ft_map(int *tab, int length, int (*f)(int))
{
	CO;
	DE;
}
