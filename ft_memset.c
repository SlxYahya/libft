/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 17:53:04 by yasaber           #+#    #+#             */
/*   Updated: 2026/10/22 17:38:21 by yasaber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t			i;
	unsigned char	*t;

	i = 0;
	if (s == NULL)
		return (NULL);
	t = (unsigned char *)s;
	while (i < len)
	{
		t[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
