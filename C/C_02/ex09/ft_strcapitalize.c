/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 23:40:45 by mmoreira          #+#    #+#             */
/*   Updated: 2020/11/30 20:27:04 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		verificador(char c);

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	if ('a' <= str[0] && str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			if (verificador(str[i - 1]))
				str[i] -= 32;
		}
		else if ('A' <= str[i] && str[i] <= 'Z')
		{
			if (verificador(str[i - 1]) == 0)
				str[i] += 32;
		}
		i++;
	}
	return (str);
}

int		verificador(char c)
{
	if ('a' <= c && c <= 'z')
		return (0);
	else if ('A' <= c && c <= 'Z')
		return (0);
	else if ('0' <= c && c <= '9')
		return (0);
	else
		return (1);
}
