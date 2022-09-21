/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:00:39 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/21 11:19:01 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	lenstr;
	char			*sub;
	int				i;
	unsigned int	lensub;

	i = 0;
	sub = malloc(len);
	lenstr = ft_strlen((char *)s);
	lensub = start + len;
	if (start > lenstr)
		return (0);
	while (start < lensub)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
int	main()
{
	char	str[] = "ABcdefGH";
	char	*sub;
	int		pos;
	int		len;
	
	pos = 0;
	len = 1;
	sub = ft_substr(str, pos, len);
	printf("%s\n", sub);
}*/