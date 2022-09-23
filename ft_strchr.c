/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:33:35 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/22 19:22:16 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)s;
	while (str[i] != c)
	{
		if (str[i] == '\0')
			return (0);
		i++;
	}
	return (&str[i]);
}
/*
int	main()
{
	char	s[20] = "Agasys\0Ajudd";
	int		c;
	
	c = '\0';
	printf("%s", strchr(s, c));
	printf("\n-----------\n");
	printf("%s", ft_strchr(s, c));
}*/