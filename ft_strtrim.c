/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:07:31 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/21 11:18:03 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	k;
	int		rep;

	str = malloc(ft_strlen((char *)s1));
	i = 0;
	k = 0;
	rep = 0;
	while (s1[i])
	{
		j = -1;
		while (set[++j])
		{
			if (s1[i] == set[j])
				rep = 1;
		}
		if (rep == 0)
			str[k++] = (char)s1[i];
		i++;
		rep = 0;
	}
	str[k] = '\0';
	return (str);
}
/*
int	main()
{
	char	str[] = "Hola Amigo ¿Sabes donde esta la biblioteca?";
	char	str2[] = "HAsbic ";
	char	*sub;

	sub = ft_strtrim(str, str2);
	printf("%s\n", sub);
}*/