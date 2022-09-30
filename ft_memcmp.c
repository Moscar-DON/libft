/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:00:33 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/30 12:26:55 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;
	int				cnt;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	cnt = 0;
	while (i < n)
	{
		if (cnt)
			return (cnt);
		cnt += (str1[i] - str2[i]);
		i++;
	}
	return (cnt);
}
