/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:00:33 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/15 16:35:43 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;
	int				cnt;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	cnt = 0;
	while (i < n)
	{
		if (cnt)
			return (cnt);
		cnt += (str1[i] - str2[i]);
		i++;
	}
	return (cnt);
}
/*
int main()
{
	char	str1[]="Hello \0World";
	char	str2[]="Hello \0Worlt";
	size_t	n;
	
	n = 15;
    printf("%d", ft_memcmp(str1, str2, n));
	printf("\n-----------\n");
    printf("%d", memcmp(str1, str2, n));   
}*/