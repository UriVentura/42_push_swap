/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_nextminmax.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:51:51 by oventura          #+#    #+#             */
/*   Updated: 2022/03/01 20:49:44 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_next_min_p(t_stack *a, int med)
{
	int	i;
	int	min;
	int	min_i;

	i = 0;
	min = get_min(a);
	min_i = get_min_p(a);
	while (i < a->size)
	{
		if (a->array[i] >= min && a->array[i] <= med)
		{
			min = a->array[i];
			min_i = i;
		}
		i++;
	}
	return (min_i);
}

int	get_next_max_p(t_stack *a, int med)
{
	int	i;
	int	max;
	int	max_i;

	i = 0;
	max = get_max(a);
	max_i = get_max_p(a);
	while (i < a->size)
	{
		if (a->array[i] <= max && a->array[i] > med)
		{
			max = a->array[i];
			max_i = i;
		}
		i++;
	}
	return (max_i);
}
