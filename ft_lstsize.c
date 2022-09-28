/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:21:07 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/28 16:35:12 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (lst == NULL)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
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