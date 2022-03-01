/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 11:33:07 by oventura          #+#    #+#             */
/*   Updated: 2021/05/28 15:16:58 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	strlcat() appends string src to the end of dst.  It will append at most
	dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
	dstsize is 0 or the original dst string was longer than dstsize
	(in practice this should not happen as it means that either dstsize is incorrect
	or that dst is not a proper string).

	If the src and dst strings overlap, the behavior is undefined.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_n;
	size_t	src_n;
	size_t	i;

	dst_n = ft_strlen(dst);
	src_n = ft_strlen(src);
	i = 0;
	if (dstsize <= dst_n)
		return (dstsize + src_n);
	if (dstsize > (dst_n + 1))
	{
		while (src[i] != '\0' && (dst_n + 1 + i) < dstsize)
		{
			dst[dst_n + i] = src[i];
			i++;
		}
	}
	dst[dst_n + i] = '\0';
	return (src_n + dst_n);
}
