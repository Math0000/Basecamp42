/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 21:38:51 by mmoreira          #+#    #+#             */
/*   Updated: 2020/12/05 01:20:50 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int i, int j, int k);

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = 48;
	while (i <= 55)
	{
		j = i + 1;
		while (j <= 56)
		{
			k = j + 1;
			while (k <= 57)
			{
				print(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

void	print(int i, int j, int k)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
	if (i == 55 && j == 56 && k == 57)
	{
	}
	else
	{
		write(1, ", ", 2);
	}
}
