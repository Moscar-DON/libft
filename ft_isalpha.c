/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:08:47 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/22 14:45:34 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int num)
{
	if ((num >= 65 && num <= 90) || (num >= 97 && num <= 122))
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int main()
{
    char   c;
    c = '1';
	printf("%d", ft_isalpha(c));
    printf("%d", isalpha(c));   
}*/