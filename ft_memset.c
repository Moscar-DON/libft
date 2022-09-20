/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:57:06 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/13 16:15:33 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*a;

	a = str;
	while (n > 0)
	{
		*a = c;
		a++;
		n--;
	}
	return (str);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
	char	str[]="Hello World";
	int		c;
	size_t	n;
	
	n = 4;
	c = 'e';
    printf("%s", ft_memset(str, c, n));
	printf("\n-----------\n");
    printf("%s", memset(str, c, n));   
}*/