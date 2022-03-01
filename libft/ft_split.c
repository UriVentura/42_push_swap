/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:03:00 by oventura          #+#    #+#             */
/*   Updated: 2022/02/11 11:04:41 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	split_count(char const *str, char c)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str == c)
			str++;
		else
		{
			i++;
			while (*str != c && *str)
				str++;
		}
	}
	return (i);
}

int	split_size(char const *s, char c, int *i)
{
	int	size;

	size = 0;
	while (s[*i] != c && s[*i])
	{
		size++;
		*i += 1;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		size;
	int		i;
	int		j;

	if (!s)
		return (0);
	str = (char **)malloc((split_count(s, c) + 1) * sizeof(char *));
	if (!str)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			size = split_size(s, c, &i);
			str[j] = ft_substr(s, (int)(i - size), size);
			j++;
		}
	}
	str[j] = 0;
	return (str);
}
