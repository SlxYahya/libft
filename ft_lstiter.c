/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 21:28:35 by yasaber           #+#    #+#             */
/*   Updated: 2026/10/20 21:36:38 by yasaber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*courant;

	if (lst == NULL || f == NULL)
		return ;
	courant = lst;
	while (courant)
	{
		f(courant->content);
		courant = courant->next;
	}
}
