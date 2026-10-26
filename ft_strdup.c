/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 10:10:40 by yasaber           #+#    #+#             */
/*   Updated: 2026/10/16 10:29:24 by yasaber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	dest = malloc(i + 1);
	if (dest == NULL)
		return (NULL);
	while (str[j])
	{
		dest[j] = str[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
