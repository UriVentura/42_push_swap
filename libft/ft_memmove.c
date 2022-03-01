/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:23:47 by oventura          #+#    #+#             */
/*   Updated: 2021/05/27 21:05:26 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    The memmove() function copies n bytes from memory area src to
    memory area dest.  The memory areas may overlap: copying takes
    place as though the bytes in src are first copied into a
    temporary array that does not overlap src or dest, and the bytes
    are then copied from the temporary array to dest.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
	}
	else if (!d && !s)
		return (NULL);
	else if (d < s)
		ft_memcpy(dst, src, len);
	return (dst);
}
