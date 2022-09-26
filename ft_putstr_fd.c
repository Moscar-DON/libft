/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:47:12 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/26 11:34:13 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (s == 0)
		return ;
	i = -1;
	while (s[++i] != 0)
		write(fd, &s[i], 1);
}
/*
int main()
{
	int		fd;	
	char	*c = "asdfgh";
	fd = 1; //0 in, 1 out
	ft_putstr_fd(c, fd);
}*/