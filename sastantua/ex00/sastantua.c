/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 19:50:31 by aschnapp          #+#    #+#             */
/*   Updated: 2017/10/29 23:32:29 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		find_max_size(int height);
void	ft_putchar(char c);
void	print_row(int max, int row, int door, int handle);
void	print_section(int sec, int last, int max);
void	print_part(char c, int length);

void	sastantua(int size)
{
	int secs;
	int max;

	secs = 1;
	max = find_max_size(size);
	while (secs <= size)
	{
		if (secs == size)
			print_section(secs, 1, max);
		else
			print_section(secs, 0, max);
		secs++;
	}
}

void	print_section(int sec, int last, int max)
{
	int i;
	int start;
	int door;

	i = sec + 2;
	if (sec % 2)
		door = sec;
	else
		door = sec - 1;
	start = find_max_size(sec) - (sec * 2 + 2);
	while (i)
	{
		if (last && i <= door && sec >= 5 && i == (door / 2 + 1))
			print_row(max, start, door, 1);
		else if (last && i <= door)
			print_row(max, start, door, 0);
		else
			print_row(max, start, 0, 0);
		start += 2;
		i--;
	}
}

int		find_max_size(int n)
{
	int i;

	if (n == 1)
		return (7);
	if (n == 2)
		return (19);
	n -= 1;
	i = (2 * (5 + (n / 2)) * (n / 2)
	+ 2 * (n % 2) * (3 + (n / 2))
	+ 1 + (n + 1) * (4 + n)) + 2;
	return (i);
}

/*
** max = int max length
** row = int row length
** door = int door width
** handle = int handle => 0, 1
*/

void	print_row(int max, int row, int door, int handle)
{
	int white_space;

	white_space = max / 2 - row / 2;
	print_part(' ', white_space);
	ft_putchar('/');
	row--;
	if (door && handle)
	{
		print_part('*', (row - door) / 2);
		print_part('|', door - 2);
		print_part('$', 1);
		print_part('|', 1);
		print_part('*', (row - door) / 2);
	}
	else if (door && !handle)
	{
		print_part('*', (row - door) / 2);
		print_part('|', door);
		print_part('*', (row - door) / 2);
	}
	else
		print_part('*', row - 1);
	ft_putchar('\\');
	ft_putchar('\n');
}

void	print_part(char c, int length)
{
	while (length)
	{
		ft_putchar(c);
		length--;
	}
}
