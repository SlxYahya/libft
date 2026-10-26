/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 17:19:56 by yasaber           #+#    #+#             */
/*   Updated: 2026/10/15 17:42:38 by yasaber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	s = (unsigned char *)s1;
	d = (unsigned char *)s2;
	while (i < n)
	{
		if (s[i] != d[i])
			return ((unsigned char)s[i] - (unsigned char)d[i]);
		i++;
	}
	return (0);
}
