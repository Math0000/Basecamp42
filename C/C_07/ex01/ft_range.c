/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 18:12:37 by mmoreira          #+#    #+#             */
/*   Updated: 2020/12/05 02:30:58 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *vet;

	if (min >= max)
		return (NULL);
	if (!(vet = malloc(sizeof(int) * (max - min))))
		return (NULL);
	i = -1;
	while (++i < max - min)
		vet[i] = min + i;
	return (vet);
}
