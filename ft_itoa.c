/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 19:04:32 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/20 14:04:15 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrsize(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

static char	*ft_itoa(int n)
{
	char	*str;
	int		size;

	size = ft_nbrsize(n);
	str = malloc(size + 1);
	str[size--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	while (n > 0)
	{
		str[size--] = '0' + (n % 10);
		n /= 10;
	}
	return (str);
}
/*
int	main()
{
	int	n;

	n = 128902189;
	printf("%d\n", n);
	printf("%s\n", ft_itoa(n));
}*/