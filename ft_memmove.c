/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:18:08 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/22 14:47:37 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = dest;
	s = (unsigned char *)src;
	i = 0;
	while (0 < n)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return (dest);
}
/*
#include <stdio.h>
int main()
{
	char	*dest;
	
	char	src[11]="murciegalo";
	size_t	n;

	dest = src + 2;
	n = 6;
	ft_memmove(dest, src, n);
    printf("ft_memmove \n%s", dest);
	printf("\n-----------\n");
	memmove(dest, src, n);
    printf("memmove \n%s",dest);
}*/