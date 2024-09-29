/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:32:06 by aursuare          #+#    #+#             */
/*   Updated: 2024/07/24 21:45:13 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		j;

	s3 = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (s3)
	{
		i = 0;
		j = 0;
		while (s1[i])
		{
			s3[i] = s1[i];
			i++;
		}
		while (s2[j])
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
		s3[i] = 0;
		return (s3);
	}
	else
		return (NULL);
}
