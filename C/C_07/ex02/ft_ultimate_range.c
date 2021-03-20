/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 18:55:00 by mmoreira          #+#    #+#             */
/*   Updated: 2020/12/05 02:32:53 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *vet;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!(vet = malloc(sizeof(int) * (max - min))))
		return (-1);
	i = -1;
	while (++i < max - min)
		vet[i] = min + i;
	*range = vet;
	return (i);
}
