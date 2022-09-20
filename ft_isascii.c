/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:42:49 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/16 17:43:19 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_isascii(int num)
{
	if (num >= 0 && num <= 127)
		return (1);
	return (0);
}

/*
#include <ctype.h>
#include <stdio.h>

int main()
{
	printf("%d", ft_isascii(61));
   printf("%d", isascii(61));  
}
*/