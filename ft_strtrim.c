/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:07:31 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/26 16:56:57 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	
	if (!s1 || !set)
		return (0);
	start = 0;
	end = ft_strlen((char *)s1) - 1;
	while (s1 && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	str = ft_substr(s1, start, end - start + 1);
	if (!str)
		return (0);
	return (str);
	
}
/*
int	main()
{
	char	str[] = "AEIOUaeiou ";
	char	str2[] = "";make clean
	char	*sub;

	sub = ft_strtrim(str, str2);
	printf("%s\n", sub);
}*/