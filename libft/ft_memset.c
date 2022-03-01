/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 19:30:27 by oventura          #+#    #+#             */
/*   Updated: 2021/05/27 20:56:20 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Memset function writes len bytes of value c (converted to an unsigned char)
	to the string b.
*/

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*mem;

	mem = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		mem[i] = (unsigned char)c;
		i++;
	}
	return (mem);
}

/* int	main(void)
{
	char str[] = "joan tu polla";
	printf("%s", ft_memset(str, 'h', 20));
}
*/
