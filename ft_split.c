/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 10:40:12 by yasaber           #+#    #+#             */
/*   Updated: 2026/10/24 14:53:41 by yasaber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_countsep(char const *s, char c)
{
	int	i;
	int	j;
	int	w;

	i = 0;
	w = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
			w++;
		if (s[i] == c && i != 0 && s[i + 1] != '\0' && s[i + 1] != c && w != 0)
			j++;
		i++;
	}
	return (j);
}

static char	**ft_null(int i, char **str)
{
	while (i > 0)
		free(str[--i]);
	free(str);
	return (NULL);
}

static int	ft_word(char const *s, char c, int i)
{
	int	j;

	j = 0;
	if (i == 0 && s[i] == c)
		i++;
	while (s[i] != c && s[i])
	{
		j++;
		i++;
	}
	return (j);
}

static char	**ft_mouka(char const *s, char c, char **str)
{
	int		i;
	int		d;
	int		j;
	int		word;

	i = 0;
	d = 0;
	str = malloc((ft_countsep(s, c) + 2) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	while (i <= ft_countsep(s, c))
	{
		j = 0;
		while (s[d] == c)
			d++;
		word = ft_word(s, c, d);
		str[i] = malloc(word + 1);
		if (str[i] == NULL)
			return (ft_null(i, str));
		while (j < word)
			str[i][j++] = s[d++];
		str[i++][j] = '\0';
	}
	str[i] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (s == NULL)
		return (NULL);
	if (s[0] == '\0')
	{
		str = malloc(sizeof(char *));
		if (str == NULL)
			return (NULL);
		str[0] = NULL;
		return (str);
	}
	if (ft_countsep(s, c) == 0 && (*s == '\0' || *s == c))
	{
		str = malloc(sizeof(char *));
		if (!str)
			return (NULL);
		str[0] = NULL;
		return (str);
	}
	str = NULL;
	return (ft_mouka(s, c, str));
}
