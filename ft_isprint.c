/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:42:00 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/22 14:45:56 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int num)
{
	if ((num >= 0 && num <= 31) || num == 127)
		return (0);
	return (1);
}

/*
#include <ctype.h>
#include <stdio.h>

int main()
{
    unsigned char   c;
    c = 127;
	printf("%d", ft_isprint(c));
    printf("%d", isprint(c));   
}*/