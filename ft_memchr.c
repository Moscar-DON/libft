/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:10:38 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/22 18:49:12 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*a;
	unsigned int	i;
	
	a = (char *)str;
	i = 0;
	while (n > 0)
	{
		if (a[i] == c)
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
	char	str[]="Hello \0World";
	int		c;
	size_t	n;
	
	n = 15;
	c = 'W';
    printf("%s", ft_memchr(str, c, n));
	printf("\n-----------\n");
    printf("%s", memchr(str, c, n));   
}*/