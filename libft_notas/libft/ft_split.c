/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 19:49:47 by aursuare          #+#    #+#             */
/*   Updated: 2024/07/24 20:46:09 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static void	ft_free(char **array, int n)
{
	while (n > 0)
	{
		free(array[n - 1]);
		n--;
	}
	free(array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		n;
	int		i;
	int		j;

	array = (char **)ft_calloc(ft_count(s, c) + 1, sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	n = 0;
	while (n < ft_count(s, c) && s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		array[n] = ft_substr(s, j, i - j);
		if (!array[n])
			return (ft_free(array, n), NULL);
		n++;
	}
	array[n] = NULL;
	return (array);
}
