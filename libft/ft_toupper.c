/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 19:19:12 by oventura          #+#    #+#             */
/*   Updated: 2021/05/26 17:48:31 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Lower case to upper case letter conversion
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = (c - 32);
	return (c);
}
