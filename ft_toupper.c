/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 09:58:45 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/15 11:07:15 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main()
{
	unsigned char	l;
	unsigned char	a;
	
	l = 'C';
	a = toupper(l);
	printf("%c", a);
	printf("\n-----------\n");
	a = ft_toupper(l);
	printf("%c", a);
}*/