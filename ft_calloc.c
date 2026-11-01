/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaber <yasaber@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 20:52:35 by yasaber           #+#    #+#             */
/*   Updated: 2026/10/30 16:18:22 by yasaber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t amount, size_t size)
{
	void	*ptr;
	size_t	size_max;

	size_max = (size_t)(-1);
	if (amount != 0 && size > size_max / amount)
		return (NULL);
	ptr = malloc(amount * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, amount * size);
	return (ptr);
}
