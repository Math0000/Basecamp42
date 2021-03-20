/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 21:38:51 by mmoreira          #+#    #+#             */
/*   Updated: 2020/11/28 20:33:33 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	second_numb(int i, int j, int m, int n);
void	print_numbs(int i, int j, int m, int n);

void	ft_print_comb2(void)
{
	char i;
	char j;
	char m;
	char n;

	i = 48;
	j = 48;
	m = 48;
	n = j + 1;
	while (i <= 57)
	{
		while (j <= 57)
		{
			n = j + 1;
			m = i;
			second_numb(i, j, m, n);
			j++;
		}
		i++;
		j = 48;
	}
}

void	second_numb(int i, int j, int m, int n)
{
	while (m <= 57)
	{
		while (n <= 57)
		{
			print_numbs(i, j, m, n);
			n++;
		}
		m++;
		n = 48;
	}
}

void	print_numbs(int i, int j, int m, int n)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, " ", 1);
	write(1, &m, 1);
	write(1, &n, 1);
	if (i == 57 && j == 56 && m == 57 && n == 57)
	{
	}
	else
		write(1, ", ", 2);
}
