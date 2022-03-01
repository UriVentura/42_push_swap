/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:46:52 by oventura          #+#    #+#             */
/*   Updated: 2022/03/01 20:10:46 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_list	*init_stack(char *str[], int size)
{
	t_stack_list	*s;

	s = ft_calloc(1, sizeof(t_stack_list));
	s->moves = 0;
	s->cpy = 0;
	s->a = ft_calloc(1, sizeof(t_stack));
	s->b = ft_calloc(1, sizeof(t_stack));
	s->a->array = ft_calloc(size, sizeof(int));
	s->b->array = ft_calloc(size, sizeof(int));
	s->a->size = size;
	s->b->size = 0;
	if (!s || !s->a || !s->b || !s->a->array
		|| !s->a->array || str_to_array(s->a->array, str, size))
	{
		free_stack(s);
		return (NULL);
	}
	return (s);
}

t_stack_list	*copy_stack(t_stack_list *s)
{
	int				i;
	t_stack_list	*dup;

	i = -1;
	dup = ft_calloc(1, sizeof(t_stack_list));
	dup->moves = 0;
	dup->cpy = 1;
	dup->a = ft_calloc(1, sizeof(t_stack));
	dup->b = ft_calloc(1, sizeof(t_stack));
	dup->a->array = ft_calloc(s->a->size, sizeof(int));
	dup->b->array = ft_calloc(s->a->size, sizeof(int));
	dup->a->size = s->a->size;
	dup->b->size = 0;
	while (i++ < s->a->size)
		dup->a->array[i] = s->a->array[i];
	return (dup);
}

void	free_stack(t_stack_list *s)
{
	free(s->a->array);
	free(s->b->array);
	free(s->a);
	free(s->b);
	free(s);
}
