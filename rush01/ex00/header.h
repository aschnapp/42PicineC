/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 13:51:47 by aschnapp          #+#    #+#             */
/*   Updated: 2017/11/05 23:16:58 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <unistd.h>
# define NP(x) (x) != '.'
# define P(x) (x) == '.'
# define WRITE(c, n) write(1, c, n)
# define I int i = 0
# define J int j = 0
# define K int k = 0
# define L int l = 0
# define M int m = 0

int		solver(char **grid, int start, int end);
void	printgrid(char **grid);
int		validate_nine(char *row);
int		validate_col(char **grid, int col);
int		validate_cluster(char **grid, int row, int col);
#endif
