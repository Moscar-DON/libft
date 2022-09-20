/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:58:53 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/12 17:24:39 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int num)
{
	if ((num >= 65 && num <= 90) || (num >= 97 && num <= 122))
		return (1);
	if ((num >= 48 && num <= 57))
		return (1);
	return (0);
}

/*
#include <ctype.h>
#include <stdio.h>

int main()
{
    unsigned char   c;
    c = 'a';
	printf("%d", ft_isalnum(c));
    printf("%d", isalnum(c));   
}*/