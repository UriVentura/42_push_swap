/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 19:15:46 by oventura          #+#    #+#             */
/*   Updated: 2021/06/03 16:58:30 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Returns a copy of string str with all leading and
	trailing white-space characters removed.
	A white-space character is one for which the
	isspace function returns logical 1 (true).
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		size_s;
	char		*str;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	size_s = ft_strlen(s1);
	while (size_s && ft_strchr(set, s1[size_s]))
		size_s--;
	str = ft_substr((char *)s1, 0, size_s + 1);
	return (str);
}
