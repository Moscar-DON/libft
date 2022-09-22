/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:21:49 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/22 14:43:38 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*str;

	len = 0;
	str = (char *)s;
	while (str[len])
		len++;
	while (str[len - 1])
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
	char	s[20] = "AgAsasAjudAd";
	int		c;
	
	
	c = 'a';
	printf("%s", strrchr(s, c));
	printf("\n-----------\n");
	printf("%s", ft_strrchr(s, c));
}*/