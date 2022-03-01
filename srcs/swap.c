/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:27:49 by oventura          #+#    #+#             */
/*   Updated: 2022/03/01 19:57:09 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	sa(t_stack_list *s)
{
	if (s->a->size > 1)
	{
		if (!s-> cpy)
			ft_putendl_fd("sa", 1);
		swap(&s->a->array[0], &s->a->array[1]);
		s->moves++;
	}
}

void	sb(t_stack_list *s)
{
	if (s->b->size > 1)
	{
		if (! s->cpy)
			ft_putendl_fd("sb", 1);
		swap(&s->b->array[0], &s->b->array[1]);
		s->moves++;
	}
}

void	ss(t_stack_list *s)
{
	if (s->a->size > 1 || s->b->size > 1)
	{
		if (! s->cpy)
			ft_putendl_fd("ss", 1);
		s->moves++;
	}
	if (s->a->size > 1)
		swap(&s->a->array[0], &s->a->array[1]);
	if (s->b->size > 1)
		swap(&s->b->array[0], &s->b->array[1]);
}
