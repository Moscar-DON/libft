/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:41:47 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/30 12:27:26 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;
	int		cnt;

	x = 0;
	cnt = 0;
	while ((s1[x] || s2[x]) && x < n)
	{
		cnt = ((unsigned char)s1[x] - (unsigned char)s2[x]);
		if (cnt != 0)
			return (cnt);
		x++;
	}
	return (cnt);
}
