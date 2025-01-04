/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanno <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 18:46:16 by fmanno            #+#    #+#             */
/*   Updated: 2025/01/04 18:46:18 by fmanno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;
	int		len;
	int		i;

	i = 0;
	len = ft_lstsize(lst);
	while ((i + 1) < len)
	{
		lst = lst->next;
		i ++;
	}
	last = lst;
	return (last);
}
