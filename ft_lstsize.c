/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:21:07 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/29 14:43:34 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;
	
	if (lst)
	{
		i = 1;
		while (lst->next != NULL)
		{
			lst = lst->next;
			i++;
		}
		return (i);
	}
	return (0);
}
/*
int	main()
{
	char	str[] = "Primero";
	char	str2[] = "Segundo";
	t_list	*lst;
	t_list	*elem1;
	t_list	*elem2;
	
	elem1 = ft_lstnew(str);
	elem2 = ft_lstnew(str2);
	lst = elem1;
	lst->next = elem2;
	lst->next->next = ft_lstnew("a");
	printf("%d",ft_lstsize(lst));
}*/