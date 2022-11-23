/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:49:05 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/30 12:26:38 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst != NULL)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			while ((*lst)->next != NULL)
				lst = &(*lst)->next;
			(*lst)->next = new;
		}
	}
}
