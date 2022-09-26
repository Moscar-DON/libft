/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 19:04:32 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/26 11:07:21 by operez-d         ###   ########.fr       */
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

static int	ft_intmincase(int n, void *str)
{
	char	*nstr;
	int		i;
	char	*auxstr;

	nstr = str;
	if (n == -2147483648)
	{
		i = -1;
		auxstr = "-2147483648";
		while (++i <= 12)
			nstr[i] = auxstr[i];
		return (1);
	}
	else if (n == 0)
	{
		nstr[0] = '0';
		nstr[1] = 0;
		return (1);
	}
	return (0);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;

	size = ft_nbrsize(n);
	str = malloc(size + 1 * sizeof(char));
	if (!(str))
		return (0);
	if (ft_intmincase(n, str) == 1)
		return (str);
	str[size--] = '\0';
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

	n = 0;
	printf("%d\n", n);
	printf("%s\n", ft_itoa(n));
}*/