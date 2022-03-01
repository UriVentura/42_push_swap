/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 11:34:28 by oventura          #+#    #+#             */
/*   Updated: 2021/05/27 21:07:11 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The strnstr() function locates the first occurrence of the null-termi-
	nated string needle in the string haystack, where not more than len char-
	acters are searched.  Characters that appear after a `\0' character are
	not searched.  Since the strnstr() function is a FreeBSD specific API, it
	should only be used when portability is not a concern.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_size;

	if (!*needle)
		return ((char *)haystack);
	n_size = ft_strlen(needle);
	while (*haystack && len-- > 0)
	{
		if (*haystack == *needle)
		{
			if (ft_strncmp(haystack, needle, n_size) == 0)
			{
				if (len + 1 >= n_size)
					return ((char *)haystack);
			}
		}
		haystack++;
	}
	return (NULL);
}
