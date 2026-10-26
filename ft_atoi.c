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

static int	ft_sign(const char *str)
{
	int	i;
	int	j;
	int	sign;

	i = 0;
	j = 0;
	sign = 1;
	while (!(str[i] >= '0' && str[i] <= '9') && str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			j++;
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (j > 1)
		return (0);
	return (sign);
}

static int	ft_skip(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+' || str[i] == 32
			|| (str[i] >= 9 && str[i] <= 13))
			i++;
		else
			break ;
	}
	return (i);
}

int	ft_atoi(const char *str)
{
	int			i;
	long int	j;
	int			k;

	j = 0;
	if (str == NULL)
		return (0);
	k = ft_sign(str);
	if (k == 0)
		return (0);
	i = ft_skip(str);
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			j = j * 10 + (str[i] - '0');
			i++;
		}
		else
			return (j * k);
	}
	return (j * k);
}
