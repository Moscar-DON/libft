/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:04:02 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/29 16:17:28 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
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
	char	str[] = "Primero";
	char	str2[] = "Segundo";
	t_list	*lst;
	t_list	*elem1;
	t_list	*elem2;
	
	elem1 = ft_lstnew((void *)str); 
	elem2 = ft_lstnew((void *)str2);
	lst = elem1;
	lst->next = elem2;
	printf("%d\n",ft_lstsize(lst));
	ft_lstdelone(lst, ft_lstdel);
	//printf("%d\n",ft_lstsize(lst));
	printf("%s:", (char *) lst->content);
    //printf("%i", (int) lst->content_size);
}*/