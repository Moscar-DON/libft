/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:50:12 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/20 15:48:19 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countsplit(char const *s, char c)
{	
	int		i;
	int		count;
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}
/////SEGMENTATION FAULT/////////
char const	*ft_strsplit(char const *s, char c, unsigned int index, char** matrix)
{
	int		len;
	int		j;
	int		k;

	j = 0;	
	while (s[j] != c)
		j++;
	j++;
	len = 0;
	k = 0;
	matrix[index] = malloc(j + 1);
	while (s[len] != c || s[len] != '\0')
	{
		matrix[index][k] = s[len];
		len++;
		k++;
	}
	return (&s[j]);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**matrix;
	int		count;
	
	count = ft_countsplit(s, c);
	matrix = malloc((count + 1) * sizeof(char *));
	i = 0;
	while (i < count)
	{
		s = ft_strsplit(s, c, i, matrix);
		i++;
	}
	return (matrix);
}

int	main()
{
	char	str[] = "Hola Buenas";
	char	**matrix;
	int		i;
	
	matrix = ft_split(str, 'a');
	i = 0;
	while (matrix[i])
	{
		printf("%s\n", matrix[i]);
		i++;
	}
	
}