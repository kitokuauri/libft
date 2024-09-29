/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:39:11 by aursuare          #+#    #+#             */
/*   Updated: 2024/07/29 19:06:28 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_count(long int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
	{
		nb *= -1;
		i++;
	}
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

static long int	sign(long int nb, char *str)
{
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	return (nb);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long int	nb;

	nb = n;
	i = ft_num_count(nb);
	str = (char *)ft_calloc((i + 1), sizeof(char));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (nb == 0)
	{
		str[0] = '0';
		return (str);
	}
	nb = sign(nb, str);
	while (nb > 0)
	{
		str[i--] = nb % 10 + 48;
		nb = nb / 10;
	}
	return (str);
}

# Convierte de char a int
