/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:17:05 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/29 16:48:54 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *i;
	
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

/*
void	ft_lstdel(void *content)
{
	content = NULL;
	free(content);
}

int	main()
{
	char	*content = "hello !";
	char	*content2 = "bye !";
	t_list	*list;
	t_list	*elem1;
	t_list	*elem2;

	elem1 = ft_lstnew((void *)content); 
	elem2 = ft_lstnew((void *)content2);
	list = elem1;
	list->next = elem2;
	printf("%d\n",ft_lstsize(list));
	ft_lstclear(&list, ft_lstdel);
	printf("%d\n",ft_lstsize(list));
}*/