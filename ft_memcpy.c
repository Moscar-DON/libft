/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:18:57 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/15 13:01:59 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = dest;
	s = (unsigned char *)src;
	i = 0;
	while (n > 0)
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
	char	dest[7]="aabbcc";
	char	dest2[7]="aabbcc";
	char	src[7]="aabbcc";
	
	size_t	n;

	n = 4;
	ft_memcpy(dest + 2, src, n);
    printf("ft_memcpy \n%s", dest);
	printf("\n-----------\n");
	memcpy(dest2 + 2, src, n);
    printf("memcpy \n%s",dest2);
}*/