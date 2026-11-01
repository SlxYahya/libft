/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaber <yasaber@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 11:51:34 by yasaber           #+#    #+#             */
/*   Updated: 2026/10/30 16:34:59 by yasaber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*d;
	size_t			i;

	i = 0;
	if (s == NULL)
		return (NULL);
	d = (unsigned char *)s;
	while (i < n)
	{
		if (d[i] == (unsigned char)c)
			return (&d[i]);
		i++;
	}
	return (NULL);
}
