/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 11:33:26 by oventura          #+#    #+#             */
/*   Updated: 2021/05/28 15:50:37 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The strchr() function locates the first occurrence of c (converted to a char)
	in the string pointed to by s.  The terminating null character is
	considered to be part of the string; therefore if c is `\0', the functions
	locate the terminating `\0'.

	The strrchr() function is identical to strchr(), except it locates the
	last occurrence of c.
*/

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	return (NULL);
}
