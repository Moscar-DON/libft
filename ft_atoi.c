/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:13:37 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/16 15:44:09 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	neg;
	int	i;

	i = 0;
	neg = 0;
	num = 0;
	if (str[0] == '-')
	{
		neg = 1;
		i++;
	}
	if (str[i] >= '0' && str[i] <= '9')
		num += str[i] - '0';
	while (str[i + 1] >= '0' && str[i + 1] <= '9')
	{
		num *= 10;
		num += (str[i + 1] - '0');
		i++;
	}
	if (neg == 1)
		num *= -1;
	return (num);
}
/*
#include <stdio.h>
int main()
{
    const char    *str = "-123s1";

    printf("%d", atoi(str));
	printf("\n-----------\n");
    printf("%d", ft_atoi(str)); 
}*/