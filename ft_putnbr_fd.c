/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:48:37 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/28 15:35:16 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void    ft_putnbr_fd(int n, int fd)
{
    char	nbr;

    if (n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return ;
    }
    if (n < 0)
    {
        write(fd, "-", 1); 
        n *= -1;
    }
    if (n < 10)
	{
		nbr = n + '0';
        write(fd, &nbr, 1);
	}
    if (n >= 10)
    {
        ft_putnbr_fd((n/10), fd);
        ft_putnbr_fd((n%10), fd);
    }
}
/*
int main()
{
    int        fd;    
    int    n;
    
    n = -3534;
    fd = 1; //0 in, 1 out
    ft_putnbr_fd(n, fd);
}*/