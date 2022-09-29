/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:49:29 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/29 17:40:22 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if(lst && f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}
/*
void	ft_iter(void *content)
{
	char	*a;
	
	a = (char *)content;
	ft_putstr_fd(a, 1);
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
	ft_lstiter(list, ft_iter);
}*/