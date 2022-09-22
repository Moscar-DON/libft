/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:27:32 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/22 14:30:50 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*a;

	a = s;
	while (n > 0)
	{
		*a = 0;
		a++;
		n--;
	}
	return (*s);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
	char	str1[]="Hello World";
	char	str2[]="Hello World";
	size_t	n;

	n = 5;
	ft_bzero(&str1[3], n);
    printf("%s", str1);
	printf("\n-----------\n");
	bzero(&str2[3], n);
    printf("%s",str2);
}*/