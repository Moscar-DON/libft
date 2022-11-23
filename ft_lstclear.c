/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:17:05 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/30 12:26:41 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*i;

	if (lst)
	{
		while ((*lst))
		{
			i = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = i;
		}
	}
}
