/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 18:15:42 by oventura          #+#    #+#             */
/*   Updated: 2021/05/26 17:58:17 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The isdigit() function tests for a decimal digit character.
	Regardless of locale, this includes the following characters only:
	'0' to '9'.
*/

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
