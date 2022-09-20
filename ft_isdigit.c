/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:46:27 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/12 17:26:16 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int num)
{
	if (num >= 48 && num <= 57)
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int main()
{
    unsigned char   c;
    c = 1;
	printf("%d", ft_isdigit(c));
    printf("%d", isdigit(c));   
}*/