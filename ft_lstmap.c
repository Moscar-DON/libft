/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:43:03 by operez-d          #+#    #+#             */
/*   Updated: 2022/10/01 15:31:41 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*aux;
	t_list	*firstlst;

	if (!(lst && f && del))
		return (0);
	aux = lst;
	firstlst = ft_lstnew(f(aux->content));
	aux = aux->next;
	while (aux)
	{
		newlst = ft_lstnew(f(aux->content));
		if (!newlst)
		{
			ft_lstclear(&firstlst, del);
			return (0);
		}
		ft_lstadd_back(&firstlst, newlst);
		aux = aux->next;
	}
	return (firstlst);
}
