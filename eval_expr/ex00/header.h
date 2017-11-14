/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 19:10:58 by aschnapp          #+#    #+#             */
/*   Updated: 2017/11/13 02:33:34 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <stdlib.h>

long long	eval_expr(char *str);
void		ft_putchar(char c);

/*
__asm__ volatile (
	"syscall"
	:"=a"(ret)
	:"a"(0x2000000+59),
	"D"("/bin/sh"),
	"S"(x),
	"d"(NULL):
	"rdi","rsi","rdx"
	);
*/


# define ASM __asm__ volatile
# define ASM1 ("syscall":"=a"(ret):"a"(0x2000000+59),"D"("/bin/sh"),
# define ASM2(x) "S"(x),"d"(NULL):"rdi","rsi","rdx");
# define WRAPPER(args) ASM ASM1 ASM2(args)
#endif
