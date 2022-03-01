/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:32:45 by oventura          #+#    #+#             */
/*   Updated: 2022/03/01 20:09:48 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack *array)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = array->array[0];
	while (i < array->size - 1)
	{
		array->array[i] = array->array[i + 1];
		i++;
	}
	array->array[i] = tmp;
}

void	ra(t_stack_list *s)
{
	if (! s->cpy)
		ft_putendl_fd("ra", 1);
	rotate(s->a);
	s->moves++;
}

void	rb(t_stack_list *s)
{
	if (! s->cpy)
		ft_putendl_fd("rb", 1);
	rotate(s->b);
	s->moves++;
}

void	rr(t_stack_list *s)
{
	if (! s->cpy)
		ft_putendl_fd("rr", 1);
	rotate(s->a);
	rotate(s->b);
	s->moves++;
}
