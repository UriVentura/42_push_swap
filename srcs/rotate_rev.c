/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_rev.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:31:41 by oventura          #+#    #+#             */
/*   Updated: 2022/03/01 20:08:01 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_rev(t_stack *array)
{
	int	i;
	int	tmp;

	i = array->size - 1;
	tmp = array->array[array->size - 1];
	while (i > 0)
	{
		array->array[i] = array->array[i - 1];
		i--;
	}
	array->array[0] = tmp;
}

void	rra(t_stack_list *s)
{
	if (! s->cpy)
		ft_putendl_fd("rra", 1);
	rotate_rev(s->a);
	s->moves++;
}

void	rrb(t_stack_list *s)
{
	if (! s->cpy)
		ft_putendl_fd("rrb", 1);
	rotate_rev(s->b);
	s->moves++;
}

void	rrr(t_stack_list *s)
{
	if (! s->cpy)
		ft_putendl_fd("rrr", 1);
	rotate_rev(s->a);
	rotate_rev(s->b);
	s->moves++;
}
