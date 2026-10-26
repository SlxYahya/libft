/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:31:31 by yasaber           #+#    #+#             */
/*   Updated: 2026/10/14 11:59:37 by yasaber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;

	i = 0;
	if (dest == NULL || src == NULL)
		return (NULL);
	if (dest < src)
	{
		while (i < n)
		{
			((char *) dest)[i] = ((const char *) src)[i];
			i++;
		}
		return (dest);
	}
	if (dest > src)
	{
		while (n > 0)
		{
			((char *) dest)[n - 1] = ((const char *) src)[n - 1];
			n--;
		}
		return (dest);
	}
	return (dest);
}
