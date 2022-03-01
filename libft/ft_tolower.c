/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 16:54:21 by oventura          #+#    #+#             */
/*   Updated: 2021/05/26 17:48:27 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Upper case to lower case letter conversion
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = (c + 32);
	return (c);
}
