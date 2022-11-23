/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:50:12 by operez-d          #+#    #+#             */
/*   Updated: 2022/10/01 15:35:44 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countstrs(char const *s, char c)
{	
	int		i;
	int		count;
	int		find;

	if (!s)
		return (0);
	i = 0;
	count = 0;
	find = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] != c && find == 0)
		{
			count++;
			find = 1;
		}
		else if (s[i] == c && find == 1)
			find = 0;
		i++;
	}
	return (count);
}

static void	ft_freematrix(char **matrix, int i)
{
	while (i >= 0)
	{
		free(matrix[i]);
		i--;
	}
	free(matrix);
}

static char const	*ft_strsplit(char const *s, char c, int i, char **matrix)
{
	int		j;
	int		k;
	int		pos;

	pos = 0;
	j = 0;
	while (s[pos] == c || s[pos] == '\0')
		pos++;
	while (!(s[pos] == c || s[pos] == '\0'))
	{
		j++;
		pos++;
	}	
	k = 0;
	matrix[i] = malloc(sizeof (char) * (j + 1));
	if (!matrix[i])
	{
		ft_freematrix(matrix, i);
		return (NULL);
	}
	s = s + pos - j;
	ft_strlcpy(matrix[i], s, j + 1);
	return (s + j + 1);
}

char	**ft_split(char const *s, char c)
{
	int		word;
	char	**matrix;
	int		count;

	count = ft_countstrs(s, c);
	matrix = malloc((count + 1) * sizeof(char *));
	if (!matrix)
		return (0);
	word = 0;
	while (word < count)
	{
		s = ft_strsplit(s, c, word, matrix);
		word++;
	}
	matrix[word] = NULL;
	return (matrix);
}
