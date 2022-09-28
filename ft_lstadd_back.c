/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:49:05 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/28 17:06:22 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst == NULL)
		return (0);
	while ((*lst)->next != NULL)
		lst = &(*lst)->next;
	lst->next = *new;
}

/*
int	main()
{
	char	str[] = "Primero";
	char	str2[] = "Segundo";
	t_list	**lst;
	t_list	*elem1;
	t_list	*elem2;
	
	elem1 = ft_lstnew((void *)str);
	elem2 = ft_lstnew((void *)str2);
	lst = &elem1;
	printf("%s\n", lst[0]->content);
	printf("============\n");
	ft_lstadd_back(lst, elem2);
	printf("%s\n", lst[0]->content);
	printf("%s\n", lst[0]->next->content);
}*/