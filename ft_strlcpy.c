/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:40:20 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/14 12:32:53 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	len;
	size_t	s;

	len = 0;
	while (src[len] != '\0')
		len++;
	s = 0;
	if (size == 0)
		return (len);
	while (src[s] != '\0' && s < (size - 1))
	{
		dest[s] = src[s];
		s++;
	}
	dest[s] = '\0';
	return (len);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	dest[5] = "Hola";
	char	src[6] = "Mundo";
	size_t	size;
	int		x;
	size = 4;
	
	printf("ft_strlcpy \n");
	x = ft_strlcpy(dest, src, size);
	printf("%s\n", dest);
	printf("%i\n", x);
	printf("\nstrlcpy \n");
	x = strlcpy(dest, src, size);
	printf("%s\n", dest);
	printf("%i", x);
}*/