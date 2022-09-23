/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:18:08 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/22 18:25:23 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (s > d)
	{
		while (n--)
			*d++ = *s++;
	}
	if (d > s)
	{
		d += n - 1;
		s += n - 1;
		while (n--)
			*d-- = *s--;
	}
	return (dest);
}
/*
#include <stdio.h>
int main()
{
	char	*dest;
	
	char	src[11]="hola mundo";
	size_t	n;

	dest = src + 1;
	n = 6;
	ft_memmove(dest, src, n);
    printf("ft_memmove \n%s", dest);
	printf("\n-----------\n");
	memmove(dest, src, n);
    printf("memmove \n%s",dest);
}*/