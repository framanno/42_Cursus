/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanno <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 18:49:36 by fmanno            #+#    #+#             */
/*   Updated: 2025/01/04 18:49:38 by fmanno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*to_del;
	t_list	*next_n;

	if (!lst || !*lst || !del)
		return ;
	to_del = *lst;
	while (to_del != NULL)
	{
		next_n = to_del->next;
		ft_lstdelone(to_del, del);
		to_del = next_n;
	}
	*lst = NULL;
}
