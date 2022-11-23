/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:54:39 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/30 13:12:40 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	int		n;

	n = count * size;
	if (n == 1 && count != 1)
		return (NULL);
	str = malloc(n);
	if (!(str))
		return (0);
	ft_bzero(str, n);
	return (str);
}
