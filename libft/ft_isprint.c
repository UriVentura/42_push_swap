/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 18:39:11 by oventura          #+#    #+#             */
/*   Updated: 2021/05/26 17:49:05 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The isprint() function tests for any printing character, including space
	(` '). The value of the argument must be representable as an unsigned
	char or the value of EOF.
*/

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
