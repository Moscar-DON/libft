/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:33:35 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/30 12:27:12 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = (char *)s;
	while (str[i] != (unsigned char)c)
	{
		if (str[i] == '\0')
			return (0);
		i++;
	}
	return (&str[i]);
}
