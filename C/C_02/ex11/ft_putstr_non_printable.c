/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 03:40:14 by mmoreira          #+#    #+#             */
/*   Updated: 2020/12/01 16:32:59 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(char c);

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 31 || str[i] == 127)
		{
			write(1, "\\", 1);
			print_hex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

void	print_hex(char c)
{
	char	vet[7];
	int		temp;

	temp = -1;
	while (temp++ < 6)
		vet[temp] = 'a' + temp;
	vet[6] = '\0';
	if (c % 16 < 10)
	{
		temp = c / 16 + '0';
		write(1, &temp, 1);
		temp = c % 16 + '0';
		write(1, &temp, 1);
	}
	else
	{
		temp = c / 16 + '0';
		write(1, &temp, 1);
		temp = vet[(c % 16) % 10];
		write(1, &temp, 1);
	}
}
