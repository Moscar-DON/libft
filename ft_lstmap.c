/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:43:03 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/30 17:16:48 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*aux;

	newlst = 0;
	if (lst && f && del)
	{
		while (lst)
		{
			aux = ft_lstnew(f(lst->content));
			if (!aux)
			{
				ft_lstclear(&aux, del);
				return (0);
			}
			ft_lstadd_back(&newlst, aux);
			lst = lst->next;
		}
		return (newlst);
	}
	return (0);
}
