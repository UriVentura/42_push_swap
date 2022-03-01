/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:06:48 by oventura          #+#    #+#             */
/*   Updated: 2022/03/01 20:06:09 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack_list	*stack;
	char			**str;
	int				i;

	i = 0;
	if (ac >= 2)
	{
		if (ac > 2)
			stack = init_stack(av + 1, ac - 1);
		else
		{
			str = ft_split(av[1], ' ');
			while (str[i])
				i++;
			stack = init_stack(str, i);
		}
		if (! stack)
			exit(error());
		sort(stack);
		free_stack(stack);
	}
}
