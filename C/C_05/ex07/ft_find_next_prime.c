/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 22:15:01 by mmoreira          #+#    #+#             */
/*   Updated: 2020/12/04 22:44:55 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		calc_limite(int nb);
int		ft_is_prime(int nb);

int		ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}

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
