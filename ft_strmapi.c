/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:39:01 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/26 12:13:17 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	size_t			len;

	if (!s || !f)
	{
		str = malloc(1);
		str[0] = 0;
		return (str);
	}
	i = 0;
	len = ft_strlen((char *)s);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (0);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
/*
char	ft_changechr(unsigned int i, char w)
{
	return (w + i);
}
 
int main()
{
	char	str[]="Hello World";
	char	*res;
	
	res = ft_strmapi(str, ft_changechr);
	printf("%s\n", res);
}*/