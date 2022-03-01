/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 20:18:42 by oventura          #+#    #+#             */
/*   Updated: 2021/06/04 20:07:05 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Write the character ’c’ over the descriptor of
	file provided.
*/

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
