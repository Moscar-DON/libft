/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:00:39 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/28 11:42:15 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;
	size_t	possub;
	size_t	lenstr;

	if (!s)
		return (0);
	lenstr = ft_strlen((char *)s);
	if (start > lenstr)
	{
		sub = malloc(1);
		*sub = 0;
		return (sub);
	}
	if (len > lenstr)
		len = lenstr - start;
	sub = malloc((sizeof * s) * (len + 1));
	if (!sub)
		return (0);
	possub = start + len;
	i = 0;
	while (start < possub && s[start] != 0)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
/*
int	main()
{
	char	str[] = "tripouille";
	char	*sub;
	int		pos;
	int		len;
	
	pos = 0;
	len = 42000;
	sub = ft_substr(str, pos, len);
	printf("%s\n", sub);
}*/