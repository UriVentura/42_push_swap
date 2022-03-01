/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_minmax.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:57:00 by oventura          #+#    #+#             */
/*   Updated: 2022/03/01 20:43:03 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min(t_stack *a)
{
	int	i;
	int	min;

	i = 0;
	min = a->array[0];
	while (i < a->size)
	{
		if (a->array[i] < min)
			min = a->array[i];
		i++;
	}
	return (min);
}

int	get_max(t_stack *a)
{
	int	i;
	int	max;

	i = 0;
	max = a->array[0];
	while (i < a->size)
	{
		if (a->array[i] > max)
			max = a->array[i];
		i++;
	}
	return (max);
}

int	get_max_p(t_stack *a)
{
	int	i;
	int	max;
	int	max_i;

	i = 0;
	max = a->array[0];
	max_i = 0;
	while (i < a->size)
	{
		if (a->array[i] > max)
		{
			max = a->array[i];
			max_i = i;
		}
		i++;
	}
	return (max_i);
}

int	get_min_p(t_stack *a)
{
	int	i;
	int	min;
	int	min_i;

	i = 0;
	min = a->array[0];
	min_i = 0;
	while (i < a->size)
	{
		if (a->array[i] < min)
		{
			min = a->array[i];
			min_i = i;
		}
		i++;
	}
	return (min_i);
}
