/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:11:16 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/16 17:40:13 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static size_t	ft_lenght(char *str)
{
	size_t	len;
	
	len = 0;
	while (str[len])
		len++;
	return (len);	
}
*/
int	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	x;
	size_t	y;
	size_t	len_dest;
	size_t	len_src;
	
	x = ft_strlen(dest);
	y = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size != 0)
	{
		while (src[y] != '\0' && (x < size - 1))
		{
			dest[x] = src[y];
			y++;
			x++;
		}
		dest[x] = '\0';
		if (size > x)
			return (len_dest + len_src);
		if (size <= x || size == 0)
			return (size + len_src);
	}
	return (size + len_src);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("STRLCAT\n");
	char    dest[20] = "holawaska ";
	char    src[6] = "mundo";
	unsigned int	x;
	x = strlcat(dest, src, 0);
	printf("%i\n", x);
	printf("%s\n", dest);


	printf("--------------------\n");	
	printf("FT_STRLCAT\n");
	char    c[20] = "holawaska ";
	char    d[6] = "mundo";
	x = ft_strlcat(c, d, 0);
	printf("%i\n", x);
	printf("%s\n", c);
	return (0);
}*/