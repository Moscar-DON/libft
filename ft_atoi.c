/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:13:37 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/23 16:42:52 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	neg;
	int	i;

	i = 0;
	neg = 1;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num += str[i] - '0'; 
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			num *= 10;
		i++;
	}
	return (num * neg);
}
/*
#include <stdio.h>
int main()
{
    const char    *str = "999999999999999999999999";

    printf("%d", atoi(str));
	printf("\n-----------\n");
    printf("%d", ft_atoi(str)); 
}*/