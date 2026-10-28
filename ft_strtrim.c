/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 10:11:58 by yasaber           #+#    #+#             */
/*   Updated: 2026/10/22 19:05:11 by yasaber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_findset_front(char const *s1, char const *set)
{
	int		i;
	int		j;
	size_t	count;

	i = 0;
	count = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
			{
				count++;
				break ;
			}
			j++;
		}
		if (set[j] == '\0')
			break ;
		i++;
	}
	return (count);
}

static size_t	ft_findset_back(char const *s1, char const *set)
{
	int		j;
	int		i;
	size_t	count;

	i = ft_strlen(s1) - 1;
	count = 0;
	while (i >= 0)
	{
		j = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
			{
				count++;
				break ;
			}
			j++;
		}
		if (set[j] == '\0')
			break ;
		i--;
	}
	return (count);
}

static char	*ft_destempty(void)
{
	char	*dest;

	dest = malloc(1);
	if (dest == NULL)
		return (NULL);
	dest[0] = '\0';
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*dest;

	if (s1 == NULL || set == NULL)
		return (NULL);
	if (s1[0] == '\0' || ((int)ft_strlen(s1) - ((int)ft_findset_front(s1, set)
				+ (int)ft_findset_back(s1, set))) < 0)
		return (ft_destempty());
	i = ft_findset_front(s1, set);
	k = ft_findset_back(s1, set);
	j = 0;
	dest = malloc(ft_strlen(s1) - (i + k) + 1);
	if (dest == NULL)
		return (NULL);
	while (s1[i + j] && i + j < (int)ft_strlen(s1) - k)
	{
		dest[j] = s1[i + j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
