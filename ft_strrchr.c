/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:21:49 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/30 12:27:32 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*str;

	len = 0;
	str = (char *)s;
	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == (unsigned char)c)
			return (&str[len]);
		len--;
	}
	return (0);
}
