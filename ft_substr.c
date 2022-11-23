/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:00:39 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/30 12:27:35 by operez-d         ###   ########.fr       */
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
