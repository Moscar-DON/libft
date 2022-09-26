/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:33:35 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/26 15:08:57 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = (char *)s;
	while (str[i] != (unsigned char)c)
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
	char	s[20] = "tripouille";
	int		c;
	
	c = '\0';
	printf("%s", strchr(s, 't' + 256));
	printf("\n-----------\n");
	printf("%s", ft_strchr(s, 't' + 256));
}*/