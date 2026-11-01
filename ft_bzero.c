/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaber <yasaber@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 20:42:02 by yasaber           #+#    #+#             */
/*   Updated: 2026/10/30 16:18:01 by yasaber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void	*s, size_t l)
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
