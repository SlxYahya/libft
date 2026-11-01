/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaber <yasaber@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 17:19:56 by yasaber           #+#    #+#             */
/*   Updated: 2026/10/30 18:13:33 by yasaber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	if (s1 == s2)
		return (0);
	i = 0;
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
