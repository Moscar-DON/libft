/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:10:38 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/26 16:33:09 by operez-d         ###   ########.fr       */
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
/*
#include <stdio.h>

int main()
{
	char	str[]={0, 1, 2 ,3 ,4 ,5};
	int		c;
	size_t	n;
	
	n = 15;
	c = 'W';
    printf("%d", ft_memchr(str, 258, 3) == str + 2);
	printf("\n-----------\n");
    printf("%d", memchr(str, 258, 3) == str + 2);   
}*/