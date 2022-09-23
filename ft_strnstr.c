/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:37:16 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/23 11:15:52 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	if (!substr[0])
		return ((char *)&str[0]);
	if (!str && len == 0)
		return (0);
	while (str[x])
	{
		y = 0;
		while (str[x + y] == substr[y] && str[x + y] != 0 && (x + y) < len)
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
	char	*str = NULL;
    char	*substr = "fake";
    char	*ptr;
	size_t		n;

	n = ft_strlen(substr);
    ptr = strnstr(str, substr, 0);
    printf("%s", ptr);
	printf("\n-----------\n");
	ptr = ft_strnstr(str, substr, 0);
    printf("%s", ptr);
}*/