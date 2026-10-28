/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 20:15:01 by yasaber           #+#    #+#             */
/*   Updated: 2026/10/18 21:36:00 by yasaber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_nb_length(long n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*ft_negative_nb(long nb)
{
	int		i;
	char	*str;

	nb = -nb;
	i = ft_nb_length(nb);
	str = malloc(i + 2);
	if (str == NULL)
		return (NULL);
	str[i + 1] = '\0';
	while (i != 0)
	{
		str[i] = nb % 10 + '0';
		nb = nb / 10;
		i--;
	}
	str[i] = '-';
	return (str);
}

static char	*ft_positive_nb(long nb)
{
	int		i;
	char	*str;

	i = ft_nb_length(nb);
	str = malloc(i + 1);
	if (str == NULL)
		return (NULL);
	str[i--] = '\0';
	while (i >= 0)
	{
		str[i--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*str;

	nb = n;
	if (nb == 0)
	{
		str = malloc(2);
		if (str == NULL)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (nb < 0)
		return (ft_negative_nb(nb));
	else
		return (ft_positive_nb(nb));
}
