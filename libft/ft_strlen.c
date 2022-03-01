/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 15:52:22 by oventura          #+#    #+#             */
/*   Updated: 2021/05/22 17:46:49 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The strlen() function computes the length of the string s.  The strnlen()
	function attempts to compute the length of s, but never scans beyond the first
	maxlen bytes of s.
*/

size_t	ft_strlen(const char *str)
{
	unsigned int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

/* int main ()
{
	const char str[] = "42madrid";

	printf("%zu \n", ft_strlen(str));
}
*/