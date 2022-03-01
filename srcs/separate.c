/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   separate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:08:10 by oventura          #+#    #+#             */
/*   Updated: 2022/03/01 20:57:05 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_separator_min(t_stack *a, int n)
{
	int	i;
	int	min;
	int	val;

	min = get_min(a);
	while (n)
	{
		i = 0;
		val = get_max(a);
		while (i < a->size)
		{
			if (a->array[i] < val && a->array[i] > min)
				val = a->array[i];
			i++;
		}
		min = val;
		n--;
	}
	return (val);
}

int	get_separator_max(t_stack *a, int n)
{
	int	i;
	int	max;
	int	val;

	max = get_max(a);
	while (n)
	{
		i = 0;
		val = get_min(a);
		while (i < a->size)
		{
			if (a->array[i] > val && a->array[i] < max)
				val = a->array[i];
			i++;
		}
		max = val;
		n--;
	}
	return (val);
}

void	check_steps(t_stack_list *s, int size, int *s_min, int *s_max)
{
	static int	min_count;
	static int	max_count;

	if (s == NULL)
	{
		min_count = INT_MAX;
		max_count = INT_MAX;
		return ;
	}
	if (! (min_count < size))
	{
		*s_min = get_separator_min(s->a, size);
		min_count = 0;
	}
	if (! (max_count < size))
	{
		*s_max = get_separator_max(s->a, size);
		max_count = 0;
	}
	if (s->a->array[0] <= *s_min)
		min_count++;
	else if (s->a->array[0] > *s_max)
		max_count++;
}

void	push_steps(t_stack_list *s, int size)
{
	int	s_min;
	int	s_max;

	check_steps(NULL, 0, 0, 0);
	while (s->a->size)
	{
		check_steps(s, size, &s_min, &s_max);
		if (s->a->array[0] <= s_min || s->a->array[0] > s_max)
		{
			pb(s);
			if (s->b->array[0] > s_max && ! (s->a->array[0] > s_max)
				&& ! (s->a->array[0] <= s_min))
				rr(s);
			else if (s->b->array[0] > s_max)
				rb(s);
		}
		else
			ra(s);
	}
}

void	separate(t_stack_list *s, int n)
{
	int	size;

	size = s->a->size;
	push_steps(s, size / n);
}
