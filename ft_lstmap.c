/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:43:03 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/29 18:10:40 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *newlst;

	if (lst && f && del)
	{
		while (lst)
		{
			newlst = f(lst->content);
		}
	}
	
}

void	ft_lstdel(void *content)
{
	content = NULL;
	free(content);
}

void	*ft_iter(void *content)
{
	char	*a;
	
	a = (char *)content;
	*a = "aaaa";
	return ((void *)a);
}

int	main()
{
	char	*content = "hello";
	//char	*content2 = "bye !";
	t_list	*list;
	t_list	*elem1;
	//t_list	*elem2;
	elem1 = ft_lstnew((void *)content); 
	//elem2 = ft_lstnew((void *)content2);
	list = elem1;
	//list->next = elem2;
	ft_lstmap(list, ft_iter, ft_lstdel);
}