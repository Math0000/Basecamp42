/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 04:56:39 by mmoreira          #+#    #+#             */
/*   Updated: 2020/12/02 20:14:39 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(int nb, int pot, int indic);
int		ten_potency(int num);

void	ft_putnbr(int nb)
{
	int pot;
	int indic;

	if (nb < 0 && nb % 10 != 0)
	{
		write(1, "-", 1);
		nb = (nb + 1) * (-1);
		indic = 0;
	}
	else if (nb < 0 && nb % 10 == 0)
	{
		write(1, "-", 1);
		nb *= -1;
		indic = 1;
	}
	else
		indic = 1;
	pot = ten_potency(nb);
	print_numbers(nb, pot, indic);
}

void	print_numbers(int nb, int pot, int indic)
{
	int mostr;

	while (pot > 0)
	{
		mostr = (nb / pot) + '0';
		if (pot < 10 && indic == 0)
			mostr++;
		write(1, &mostr, 1);
		nb = nb % pot;
		pot /= 10;
	}
}

int		ten_potency(int num)
{
	int pot;

	pot = 1;
	while (num >= 10)
	{
		num /= 10;
		pot *= 10;
	}
	return (pot);
}
