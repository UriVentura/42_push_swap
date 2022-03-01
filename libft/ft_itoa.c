/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:01:18 by oventura          #+#    #+#             */
/*   Updated: 2021/06/04 19:41:51 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Reserve memory (with malloc (3)) and return the
	character string representing the integer
	passed as argument. You must manage the
	negative numbers.
*/

static int	len_itoa(int n)
{
	size_t	i;

	if (n == 0)
		return (1);
	i = 0;
	if (n <= 0)
	{
		n *= -1;
		i++;
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*res;

	len = len_itoa(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (n < 0)
	{
		n *= -1;
		res[0] = '-';
	}
	while (len-- > 0)
	{
		if (res[len] == '-')
			break ;
		res[len] = ('0' + (n % 10));
		n /= 10;
	}
	return (res);
}
