/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 22:43:39 by mmoreira          #+#    #+#             */
/*   Updated: 2020/12/02 20:27:24 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		verif_numero(char *str, int *pi);
int		verif_sin(char *str, int *pi, int *sin);
int		verif_comeco(char *str, int *pi);
int		verif_isspace(char c);

int		ft_atoi(char *str)
{
	int sin;
	int *psin;
	int i;
	int *pi;
	int temp;

	i = 0;
	sin = 1;
	pi = &i;
	psin = &sin;
	temp = verif_comeco(str, pi);
	if (temp == 0)
		return (0);
	else if (temp == 1)
	{
		temp = verif_sin(str, pi, psin);
		if (temp == 0)
			return (0);
	}
	temp = verif_numero(str, pi);
	return (temp * sin);
}

int		verif_comeco(char *str, int *pi)
{
	while (str[*pi] != '\0')
	{
		if (verif_isspace(str[*pi]))
			*pi += 1;
		else if (str[*pi] == '+' || str[*pi] == '-')
			return (1);
		else if (str[*pi] >= '0' && str[*pi] <= '9')
			return (2);
		else
			return (0);
	}
	return (0);
}

int		verif_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n')
		return (1);
	else if (c == '\r' || c == '\t' || c == '\v')
		return (1);
	else
		return (0);
}

int		verif_sin(char *str, int *pi, int *sin)
{
	while (str[*pi] != '\0')
	{
		if (str[*pi] == '-')
		{
			*sin *= -1;
			*pi += 1;
		}
		else if (str[*pi] == '+')
			*pi += 1;
		else if (str[*pi] >= '0' && str[*pi] <= '9')
			return (1);
		else
			return (0);
	}
	return (0);
}

int		verif_numero(char *str, int *pi)
{
	int num;

	num = 0;
	while (str[*pi] != '\0' && str[*pi] >= '0' && str[*pi] <= '9')
	{
		num = (num * 10) + str[*pi] - '0';
		*pi += 1;
	}
	return (num);
}
