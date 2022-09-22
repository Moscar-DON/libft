/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:26:45 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/22 14:44:07 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main()
{
	unsigned char	l;
	unsigned char	a;
	
	l = 'z';
	a = tolower(l);
	printf("%c", a);
	printf("\n-----------\n");
	a = ft_tolower(l);
	printf("%c", a);
}*/