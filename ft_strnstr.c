/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:37:16 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/22 14:41:28 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	if (substr[0] == 0)
		return ((char *)&str[0]);
	while (str[x])
	{
		y = 0;
		while (str[x + y] == substr[y] && str[x + y] != 0 && x < len)
		{
			if (substr[y + 1] == '\0')
				return ((char *)&str[x]);
			y++;
		}
		x++;
	}
	return (0);
}
/*
int main()
{
	char	*str = "Foo fighters";
    char	*substr = "e";
    char	*ptr;
	int		n;

	n = 10;
    ptr = strnstr(str, substr, n);
    printf("%s", ptr);
	printf("\n-----------\n");
	ptr = ft_strnstr(str, substr, n);
    printf("%s", ptr);
}*/