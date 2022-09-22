/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:21:07 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/22 14:56:13 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
	return (lst);
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
	ft_lstadd_front(lst, elem2);
	printf("%s\n", lst[0]->content);
	printf("%s\n", lst[0]->next->content);
}*/