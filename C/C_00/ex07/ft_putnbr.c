/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 04:56:39 by mmoreira          #+#    #+#             */
/*   Updated: 2020/12/04 04:02:01 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(int nb, int pot, int indic);
int		ten_potency(int num);

void	ft_putnbr(int nb)
{
	int pot;
	long int nbr;

	if (nb <0)
		write(1,"-",1);
		nbr = nb*(-1);
	else
		nbr = nb
	pot = ten_potency(nb);
	print_numbers(nb, pot, indic);
}

void	print_numbers(int nb, int pot, int indic)
{
	int mostr;

	while (pot > 0)
	{
		mostr = (nb / pot) + '0';
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
