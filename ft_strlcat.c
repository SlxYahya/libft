/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:02:55 by yasaber           #+#    #+#             */
/*   Updated: 2026/10/23 10:20:27 by yasaber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		c;

	i = 0;
	j = 0;
	c = 0;
	while (src[i])
		i++;
	if (dest == NULL && size == 0)
		return (i);
	while (j < size && dest[j])
		j++;
	if (size <= j)
		return (size + i);
	while (src[c] && j + c < size - 1)
	{
		dest[j + c] = src[c];
		c++;
	}
	dest[j + c] = '\0';
	return (i + j);
}
