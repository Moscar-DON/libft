/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:50:12 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/26 12:23:38 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countstrs(char const *s, char c)
{	
	int		i;
	int		count;
	
	if (!s)
		return (0);
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count + 1);
}

static char const	*ft_strsplit(char const *s, char c, int i, char **matrix)
{
	int		len;
	int		j;
	int		k;

	j = 0;
	while (!(s[j] == c || s[j] == '\0'))
		j++;
	len = 0;
	k = 0;
	matrix[i] = malloc(j + 1);
	while (!(s[len] == c || s[len] == '\0'))
	{
		matrix[i][k] = s[len];
		len++;
		k++;
	}
	matrix[i][k] = 0;
	return (&s[j + 1]);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**matrix;
	int		count;

	count = ft_countstrs(s, c);
	matrix = malloc((count + 1) * sizeof(char *));
	i = 0;
	while (i < count)
	{
		s = ft_strsplit(s, c, i, matrix);
		i++;
	}
	matrix[i] = NULL;
	return (matrix);
}
/*
int	main()
{
	char	str[] = "Hola Buensaaas";
	char	**matrix;
	int		i;
	
	matrix = ft_split(str, 'a');
	i = 0;
	while (matrix[i])
	{
		printf("%d", i + 1);
		printf("%s\n", matrix[i]);
		i++;
	}
}*/