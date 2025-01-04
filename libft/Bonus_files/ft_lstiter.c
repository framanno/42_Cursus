/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanno <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 18:49:52 by fmanno            #+#    #+#             */
/*   Updated: 2025/01/04 18:49:54 by fmanno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*next_n;

	if (!lst)
		return ;
	while (lst != NULL)
	{
		next_n = lst->next;
		(*f)(lst->content);
		lst = next_n;
	}
}
