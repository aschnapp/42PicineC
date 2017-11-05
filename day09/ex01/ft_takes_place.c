/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 21:03:46 by aschnapp          #+#    #+#             */
/*   Updated: 2017/11/02 22:37:23 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define DN(x) ((x) <= 11 ? "A.M." : "P.M.")
#define T(t) (t) % 12
#define STRING "THE FOLLOWING TAKES PLACE BETWEEN %d:00 %s AND %d:00 %s\n"

void	ft_takes_place(int hour)
{
	if (hour == 12)
	{
		printf(STRING, 12, "P.M.", 1, "P.M.");
		return ;
	}
	if (hour == 0)
	{
		printf(STRING, 12, "A.M.", 1, "A.M.");
		return ;
	}
	if (hour + 1 == 24)
	{
		printf(STRING, 11, "P.M.", 12, "A.M.");
		return ;
	}
	if (hour + 1 == 12)
	{
		printf(STRING, 11, "A.M.", 12, "P.M.");
		return ;
	}
	printf(STRING, T(hour), DN(hour), T(hour + 1), DN(hour + 1));
}
