/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 20:35:39 by mmoreira          #+#    #+#             */
/*   Updated: 2020/12/03 06:19:57 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		verif_base(char *base);
int		verif_repeticao(char *base, int n);
void	print_numbers(long int nb, int n, char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int			n;
	long int	nb;

	if (verif_base(base))
	{
		n = 0;
		while (base[n] != '\0')
			n++;
		if (nbr < 0)
		{
			write(1, "-", 1);
			nb = nbr * (-1);
		}
		else
			nb = nbr;
		print_numbers(nb, n, base);
	}
}

int		verif_base(char *base)
{
	int i;

	i = 0;
	if (base[0] == 0)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	else if (verif_repeticao(base, i))
		return (0);
	else
		return (1);
}

int		verif_repeticao(char *base, int n)
{
	char	vetor[n + 1];
	int		i;
	int		j;

	i = 0;
	vetor[0] = '\0';
	while (base[i] != '\0')
	{
		j = 0;
		while (vetor[j] != '\0')
		{
			if (base[i] == vetor[j])
				return (1);
			j++;
		}
		vetor[j] = base[i];
		vetor[j + 1] = '\0';
		i++;
	}
	return (0);
}

void	print_numbers(long int nb, int n, char *base)
{
	int pot;
	int num;
	int mostr;

	pot = 1;
	num = nb;
	while (num >= n)
	{
		num /= n;
		pot *= n;
	}
	while (pot > 0)
	{
		mostr = base[nb / pot];
		write(1, &mostr, 1);
		nb = nb % pot;
		pot /= n;
	}
}
