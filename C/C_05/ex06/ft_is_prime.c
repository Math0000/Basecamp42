/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 21:25:30 by mmoreira          #+#    #+#             */
/*   Updated: 2020/12/04 22:44:33 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		calc_limite(int nb);

int		ft_is_prime(int nb)
{
	int i;
	int n;

	if (nb < 2)
		return (0);
	i = 2;
	n = calc_limite(nb);
	while (i <= n)
	{
		if (nb % i == 0 && nb != 2)
			return (0);
		i++;
	}
	return (1);
}

int		calc_limite(int nb)
{
	long int i;

	i = 0;
	while (i * i < nb)
		i++;
	return (i);
}
