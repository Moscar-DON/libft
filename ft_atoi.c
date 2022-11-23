/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:13:37 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/30 12:26:02 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_longvalue(size_t n, int neg)
{
	if (n > 2147483647 && neg > 0)
		return (-1);
	if (n > 2147483648 && neg < 0)
		return (0);
	return (1);
}

int	ft_atoi(const char *str)
{
	size_t	num;
	int		neg;
	int		i;

	i = 0;
	neg = 1;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num += str[i] - '0';
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			num *= 10;
		i++;
	}
	if (ft_longvalue(num, neg) == 0 || ft_longvalue(num, neg) == -1)
		return (ft_longvalue(num, neg));
	return (num * neg);
}
