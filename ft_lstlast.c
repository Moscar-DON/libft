/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:34:56 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/29 14:47:45 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list 	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (0);
	while (lst->next != NULL)
		lst = lst->next;
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
	ft_lstadd_front(lst, elem2);
	printf("%d",ft_lstsize(lst[0]));
}*/