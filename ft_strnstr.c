/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 17:51:39 by yasaber           #+#    #+#             */
/*   Updated: 2026/10/15 19:35:56 by yasaber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *sub, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (big == NULL || sub == NULL)
		return (NULL);
	if (sub[i] == '\0')
		return ((char *)big);
	while (i < n && big[i])
	{
		j = 0;
		if (big[i] == sub[j])
		{
			while (i + j < n && big[i + j] && sub[j] && big[i + j] == sub[j])
				j++;
			if (sub[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
