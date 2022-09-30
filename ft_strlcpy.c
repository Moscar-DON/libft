/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:40:20 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/30 12:58:30 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	s;

	len = 0;
	while (src[len] != '\0')
		len++;
	s = 0;
	if (dstsize == 0)
		return (len);
	while (src[s] != '\0' && s < (dstsize - 1))
	{
		dst[s] = src[s];
		s++;
	}
	dst[s] = '\0';
	return (len);
}
