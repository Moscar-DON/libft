/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:10:38 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/30 12:26:53 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*a;
	unsigned int	i;

	a = (unsigned char *)str;
	i = 0;
	while (n > 0)
	{
		if (a[i] == (unsigned char)c)
			return (&a[i]);
		i++;
		n--;
	}
	return (0);
}
