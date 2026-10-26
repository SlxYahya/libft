/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 18:48:12 by yasaber           #+#    #+#             */
/*   Updated: 2026/10/20 21:27:56 by yasaber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*courant;

	if (lst == NULL || del == NULL)
		return ;
	if (*lst == NULL)
		return ;
	while (*lst)
	{
		courant = *lst;
		*lst = (*lst)->next;
		del(courant->content);
		free(courant);
	}
	*lst = NULL;
}
