/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:25:18 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/23 18:36:56 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*str;
	size_t	i;

	if (!s1 || !s2)
		return (0);
	lens1 = ft_strlen((char *)s1);
	lens2 = ft_strlen((char *)s2);
	str = ft_calloc(sizeof(char), (lens1 + lens2 + 1));
	if (!str)
		return (0);
	i = -1;
	while (++i < lens1)
		str[i] = s1[i];
	i = -1;
	while (++i < lens2)
		str[lens1++] = s2[i];
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