/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 13:50:38 by oventura          #+#    #+#             */
/*   Updated: 2021/05/28 16:35:15 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The strlcpy() and strlcat() functions copy and concatenate strings. strlcpy()
	copies up to dstsize - 1 characters from the string src to dst, NUL-terminating
	the result if dstsize is not 0.
*/

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	unsigned int	i;

	i = 0;
	if (!dstsize)
		return (ft_strlen(src));
	if (!dest)
		return (0);
	while (i < (dstsize - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
