/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:51:16 by oventura          #+#    #+#             */
/*   Updated: 2022/03/01 20:09:31 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	sorted(t_stack *a)
{
	int	i;

	i = 0;
	while (i < (a->size -1))
	{
		if (!(a->array[i] <= a->array[i + 1]))
			return (0);
		i++;
	}
	return (1);
}

void	sort(t_stack_list *s)
{
	if (!sorted(s->a))
	{
		if (s->a->size == 2)
			sa(s);
		else if (s->a->size == 3)
			sort_3(s);
		else if (s->a->size == 5)
			sort_5(s);
		else
		{
			separate(s, get_best_step(s));
			insert_sort(s);
		}
	}
}

void	sort_3(t_stack_list *s)
{
	if (s->a->array[0] > s->a->array[1] && s->a->array[0] > s->a->array[2]
		&& s->a->array[1] < s->a->array[2])
		ra(s);
	else
	{
		if (s->a->array[0] > s->a->array[1])
			sa(s);
		if (s->a->array[1] > s->a->array[2])
			rra(s);
		if (s->a->array[0] > s->a->array[1])
			sa(s);
	}
}

void	sort_5(t_stack_list *s)
{
	int	pos;

	if (abs(get_min_m(get_min_p(s->a), s->a->size))
		< abs(get_min_m(get_max_p(s->a), s->a->size)))
	{
		pos = get_min_m(get_min_p(s->a), s->a->size);
		move_a(s, pos);
		pb(s);
		pos = get_min_m(get_min_p(s->a), s->a->size);
		move_a(s, pos);
		pb(s);
	}
	else
	{
		pos = get_min_m(get_min_p(s->a), s->a->size);
		move_a(s, pos);
		pb(s);
		pos = get_min_m(get_min_p(s->a), s->a->size);
		move_a(s, pos);
		pb(s);
	}
	sort_3(s);
	insert_sort(s);
	if (s->b->array[0] > s->a->array[0])
		move_a(s, 2);
}

int	get_best_step(t_stack_list *s)
{
	int				i;
	int				nb;
	int				min_moves;
	t_stack_list	*scpy;

	i = 1;
	min_moves = 0;
	while (i <= 25)
	{
		scpy = copy_stack(s);
		separate(scpy, i);
		insert_sort(scpy);
		if (scpy->moves < min_moves || !min_moves)
		{
			nb = i;
			min_moves = scpy->moves;
		}
		free_stack(scpy);
		i++;
	}
	return (nb);
}
