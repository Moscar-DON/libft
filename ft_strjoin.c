/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:25:18 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/21 11:10:50 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*str;
	size_t	i;

	lens1 = ft_strlen((char *)s1);
	lens2 = ft_strlen((char *)s2);
	str = malloc(lens1 + lens2 + 1);
	i = 0;
	while (i <= lens1)
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[lens1] = s2[i];
		lens1++;
		i++;
	}
	str[lens1 + lens2 + 1] = '\0';
	return (str);
}
/*
int	main()
{
	char	str[] = "Hola ";
	char	str2[] = "Mundo";
	char	*sub;

	sub = ft_strjoin(str, str2);
	printf("%s\n", sub);
}*/