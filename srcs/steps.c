/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   steps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:22:30 by oventura          #+#    #+#             */
/*   Updated: 2022/03/01 20:56:48 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	abs(int i)
{
	if (i < 0)
		return (-i);
	else
		return (i);
}

void	move_a(t_stack_list *s, int i)
{
	while (i > 0)
	{
		ra(s);
		i--;
	}
	while (i < 0)
	{
		rra(s);
		i++;
	}
}

void	move_b(t_stack_list *s, int i)
{
	while (i > 0)
	{
		rb(s);
		i--;
	}
	while (i < 0)
	{
		rrb(s);
		i++;
	}
}

int	get_min_m(int pos, int size)
{
	if (pos < (size / 2))
		return (pos);
	else
		return (-(size - pos));
}
