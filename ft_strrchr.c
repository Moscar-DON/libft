/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:21:49 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/23 10:05:20 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*str;

	len = 0;
	str = (char *)s;
	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == c)
			return (&str[len]);
		len--;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char	*s = "\0there is so many in this string !";
	int		c;
	
	
	c = '\0';
	printf("%s", strrchr(s, c));
	printf("\n-----------\n");
	printf("%s", ft_strrchr(s, c));
}*/