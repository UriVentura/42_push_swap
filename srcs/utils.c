/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:37:36 by oventura          #+#    #+#             */
/*   Updated: 2022/03/01 20:11:00 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_nbr(char *str)
{
	int	i;
	int	size;

	i = 0;
	if (str[0] == '-')
		i = 1;
	size = ft_strlen(str);
	if (i == size)
		return (0);
	while (i < size)
		if (! ft_isdigit(str[i++]))
			return (0);
	return (1);
}

int	is_dup(int nb, int array[], int size)
{
	int	i;

	i = 0;
	while (i < size)
		if (nb == array[i++])
			return (1);
	return (0);
}

int	str_to_array(int array[], char *str[], int size)
{
	int		i;
	long	nb;

	i = 0;
	while (i < size)
	{
		if (! is_nbr(str[i]))
			return (1);
		nb = ft_atoi(str[i]);
		if (nb > INT_MAX || nb < INT_MIN || is_dup(nb, array, i))
			return (1);
		array[i] = nb;
		i++;
	}
	return (0);
}

int	error(void)
{
	ft_putendl_fd("Error", 2);
	return (1);
}
