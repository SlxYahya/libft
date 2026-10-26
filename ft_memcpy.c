/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 09:28:46 by yasaber           #+#    #+#             */
/*   Updated: 2026/10/13 11:32:58 by yasaber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*t;
	const unsigned char	*s;

	i = 0;
	if (dest == NULL || src == NULL)
		return (NULL);
	t = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (i < n)
	{
		t[i] = s[i];
		i++;
	}
	return (dest);
}
