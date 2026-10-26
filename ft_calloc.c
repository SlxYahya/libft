/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 20:52:35 by yasaber           #+#    #+#             */
/*   Updated: 2026/10/16 10:08:12 by yasaber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_bzero(void *s, size_t l)
{
	size_t			i;
	unsigned char	*t;

	i = 0;
	if (s == NULL)
		return ;
	t = (unsigned char *)s;
	while (i < l)
	{
		t[i] = 0;
		i++;
	}
}

void	*ft_calloc(size_t amount, size_t size)
{
	void	*ptr;

	ptr = malloc(amount * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, amount * size);
	return (ptr);
}
