/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:59:21 by oventura          #+#    #+#             */
/*   Updated: 2022/03/01 21:06:25 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_max(t_stack_list *s, int *pos_max)
{
	if (*pos_max > 0 && s->a->array[0] > s->a->array[1])
	{
		rr(s);
		(*pos_max)--;
	}
	else if (s->a->array[0] > s->a->array[1])
		ra(s);
	move_b(s, *pos_max);
}

void	move_min(t_stack_list *s, int *pos_min, int nb_min, int nb)
{
	if (*pos_min > 0 && nb_min > nb && s->a->array[0] > s->a->array[1])
	{
		rr(s);
		(*pos_min)--;
	}
	else if (s->a->array[0] > s->a->array[1])
		ra(s);
	move_b(s, *pos_min);
}

void	insert_sort(t_stack_list *s)
{
	int	nb;
	int	nb_min;
	int	pos_max;
	int	pos_min;

	nb = get_separator_min(s->b, s->b->size / 2);
	while (s->b->size)
	{
		pos_max = get_min_m(get_next_max_p(s->b, nb), s->b->size);
		pos_min = get_min_m(get_next_min_p(s->b, nb), s->b->size);
		nb_min = get_min(s->b);
		if ((abs(pos_max) + 1) < abs(pos_min))
			move_max(s, &pos_max);
		else
			move_min(s, &pos_min, nb_min, nb);
		pa(s);
	}
	if (s->a->array[0] > s->a->array[1])
		ra(s);
}
