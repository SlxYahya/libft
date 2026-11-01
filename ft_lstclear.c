/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaber <yasaber@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 18:48:12 by yasaber           #+#    #+#             */
/*   Updated: 2026/10/30 16:19:33 by yasaber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	if (lst == NULL || del == NULL)
		return ;
	if (*lst == NULL)
		return ;
	while (*lst)
	{
		current = *lst;
		*lst = (*lst)->next;
		del(current->content);
		free(current);
	}
	*lst = NULL;
}
