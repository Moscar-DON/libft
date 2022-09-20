/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:06:48 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/16 16:35:32 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_strlen(char *str)
{
	int i;

    i = 0;
	while (str[i])
        i++;
    return (i);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
    char    a[]="sdifhdsijcjoisdfuusd sdhfuiidsuf98e8w9 aaf &/#@¢@#¢";
	

    printf("%d", ft_strlen(&a[0]));
	printf("\n-----------\n");
    printf("%lu", strlen(&a[0]));   
}*/