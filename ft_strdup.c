/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaber <yasaber@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 10:10:40 by yasaber           #+#    #+#             */
/*   Updated: 2026/10/30 16:36:31 by yasaber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	dest = malloc(i + 1);
	if (dest == NULL)
		return (NULL);
	while (str[j])
	{
		dest[j] = str[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
