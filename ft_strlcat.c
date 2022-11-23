/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:11:16 by operez-d          #+#    #+#             */
/*   Updated: 2022/10/01 15:35:54 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	x;
	size_t	y;
	size_t	len_dest;
	size_t	len_src;

	if (!dst && dstsize == 0)
		return (0);
	x = ft_strlen(dst);
	y = 0;
	len_dest = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (dstsize <= x || dstsize == 0)
		return (dstsize + len_src);
	if (dstsize != 0)
	{
		while (src[y] != '\0' && (x < dstsize - 1))
			dst[x++] = src[y++];
		dst[x] = '\0';
		if (dstsize > x)
			return (len_dest + len_src);
	}
	return (dstsize + len_src);
}
