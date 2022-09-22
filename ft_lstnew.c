/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:29:56 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/22 15:39:44 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *newnode;
	
	newnode = malloc(sizeof(t_list));
	if (!newnode)
		return (0);
	newnode->next = 0;
	newnode->content = content;
	return (newnode);
}
/*
int	main()
{
	char	str[] = "yrueduhsojsdo";
	t_list	*new;
	
	content = ft_lstnew((void *)str);
	printf("%s\n", new->content);
}*/