/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:52:01 by aursuare          #+#    #+#             */
/*   Updated: 2024/07/24 20:45:44 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_charset(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_charset(s1[end - 1], set))
		end--;
	len = end - start;
	trim = (char *)malloc((len + 1) * sizeof(char));
	if (!trim)
		return (NULL);
	len = 0;
	while (start < end)
		trim[len++] = s1[start++];
	trim[len] = 0;
	return (trim);
}
