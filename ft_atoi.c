/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 20:18:08 by yasaber           #+#    #+#             */
/*   Updated: 2026/10/24 14:34:30 by yasaber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_skip(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
		else
			break ;
	}
	return (i);
}

static int	ft_int_calculator(const char *str, int i, int sign)
{
	long int	res;

	res = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			if (res > (LONG_MAX - (str[i] - '0')) / 10)
			{
				if (sign == 1)
					return (-1);
				return (0);
			}
			res = res * 10 + (str[i] - '0');
			i++;
		}
		else
			break ;
	}
	return ((int)(res * sign));
}

int	ft_atoi(const char *str)
{
	int			i;
	int			k;

	k = 1;
	if (str == NULL)
		return (0);
	i = ft_skip(str);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			k *= -1;
	}
	if (str[i] == '-' || str[i] == '+')
		return (0);
	return (ft_int_calculator(str, i, k));
}
