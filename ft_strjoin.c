/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 18:50:06 by yasaber           #+#    #+#             */
/*   Updated: 2026/10/17 09:54:19 by yasaber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_strlen(char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		k;
	int		d;

	k = 0;
	d = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	str = malloc(ft_strlen(s2) + ft_strlen(s1) + 1);
	if (str == NULL)
		return (NULL);
	while (s1[k])
	{
		str[k] = s1[k];
		k++;
	}
	while (s2[d])
	{
		str[k + d] = s2[d];
		d++;
	}
	str[k + d] = '\0';
	return (str);
}
