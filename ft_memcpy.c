/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaber <yasaber@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 09:28:46 by yasaber           #+#    #+#             */
/*   Updated: 2026/10/28 22:32:11 by yasaber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*t;
	const unsigned char	*s;

	i = 0;
	t = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (i < n)
	{
		t[i] = s[i];
		i++;
	}
	return (dest);
}
