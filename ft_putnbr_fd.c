/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:48:37 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/22 14:48:08 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	*nbr;
	int		i;

	nbr = ft_itoa(n);
	i = -1;
	while (nbr[++i] != 0)
		write(fd, &nbr[i], 1);
}
/*
int main()
{
	int		fd;	
	int	n;
	
	n = -2147483648;
	fd = 1; //0 in, 1 out
	ft_putnbr_fd(n, fd);
}*/