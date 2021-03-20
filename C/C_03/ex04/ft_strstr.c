/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:56:32 by mmoreira          #+#    #+#             */
/*   Updated: 2020/12/02 01:38:51 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		verificar(char *str1, char *str2, unsigned int n);

char	*ft_strstr(char *str, char *to_find)
{
	char			*pont;
	unsigned int	i;

	i = 0;
	if (to_find[i] == 0)
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			if (verificar(str, to_find, i))
			{
				pont = &str[i];
				return (pont);
			}
		}
		i++;
	}
	return (NULL);
}

int		verificar(char *str1, char *str2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (str2[i] != '\0')
	{
		if (str1[n + i] != str2[i])
			return (0);
		i++;
	}
	return (1);
}
