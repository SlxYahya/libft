/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaber <yasaber@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:31:31 by yasaber           #+#    #+#             */
/*   Updated: 2026/11/03 20:30:50 by yasaber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;

	i = 0;
	if (dest < src)
	{
		while (i < n)
		{
			((char *) dest)[i] = ((const char *) src)[i];
			i++;
		}
		return (dest);
	}
	else
	{
		while (n > 0)
		{
			((char *) dest)[n - 1] = ((const char *) src)[n - 1];
			n--;
		}
	}
	return (dest);
}
