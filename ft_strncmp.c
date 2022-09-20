/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:41:47 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/15 13:07:52 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;
	size_t	cnt;
	
	x = 0;
	cnt = 0;
	while ((s1[x] || s2[x]) && x < n)
	{
		if (cnt)
			return (cnt);
		cnt += (s1[x] - s2[x]);
		x++;
	}
	return (cnt);	
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char	s1[20] = "HolaMundo";
	char	s2[20] = "Holak";
	int		c;
	
	c = 4;
	printf("%d", strncmp(s1, s2, c));
	printf("\n-----------\n");
	printf("%d", ft_strncmp(s1, s2, c));
}*/