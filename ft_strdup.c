/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:21:32 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/22 14:36:43 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;
	int		len;

	len = ft_strlen((char *)s1);
	str = malloc(len * sizeof * s1);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
int main() 
{
	char	*str = "Wannabe";
	char	*strcopy;
	char	*strdupcpy;
	
	strcopy = "asedssd";
	strdupcpy = "AESEDFERF";
	printf("%s\n", str);
	strcopy = strdup(str);
	printf("%s\n", strcopy);
	strdupcpy = ft_strdup(str);
	printf("%s\n", strdupcpy);	
}*/