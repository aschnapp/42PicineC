/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:21:07 by aschnapp          #+#    #+#             */
/*   Updated: 2017/11/06 16:56:32 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define CO int i = 0
#define DE while(i+1<length){if(f(tab[i+1],tab[i])<0)return(0);i++;}return(1)

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	CO;
	DE;
}
