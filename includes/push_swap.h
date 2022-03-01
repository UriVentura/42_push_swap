/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:12:31 by oventura          #+#    #+#             */
/*   Updated: 2022/03/01 20:04:09 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/*INCLUDES*/
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>

# include <libft.h>

/*STRUCTS*/
typedef struct s_stack
{
	int			*array;
	int			size;
}				t_stack;

typedef struct s_stack_list
{
	t_stack		*a;
	t_stack		*b;
	int			moves;
	int			cpy;
}				t_stack_list;

/*main*/
int				main(int ac, char **av);

/*stack*/
void			free_stack(t_stack_list *s);
t_stack_list	*init_stack(char *str[], int size);
t_stack_list	*copy_stack(t_stack_list *s);

/*sort*/
char			sorted(t_stack *a);
void			sort(t_stack_list *s);
void			sort_3(t_stack_list *s);
void			sort_5(t_stack_list *s);
int				get_best_step(t_stack_list *s);

/*swap*/
void			sa(t_stack_list *s);
void			sb(t_stack_list *s);
void			ss(t_stack_list *s);

/*push*/
void			pa(t_stack_list *s);
void			pb(t_stack_list *s);

/* rotate*/
void			ra(t_stack_list *s);
void			rb(t_stack_list *s);
void			rr(t_stack_list *s);

/*rotate_rev*/
void			rra(t_stack_list *s);
void			rrb(t_stack_list *s);
void			rrr(t_stack_list *s);

/*get_min_max/get_next_min_max*/
int				get_min(t_stack *a);
int				get_max(t_stack *a);
int				get_max_p(t_stack *a);
int				get_min_p(t_stack *a);
int				get_next_min_p(t_stack *a, int median);
int				get_next_max_p(t_stack *a, int median);

/*insert*/
void			move_max(t_stack_list *s, int *pos_max);
void			move_min(t_stack_list *s, int *pos_min, int nb_min, int nb);
void			insert_sort(t_stack_list *s);

/*separate*/
int				get_separator_min(t_stack *a, int n);
int				get_separator_max(t_stack *a, int n);
void			check_steps(t_stack_list *s, int size, int *s_min, int *s_max);
void			push_stps(t_stack_list *s, int size);
void			separate(t_stack_list *s, int n);

/*steps*/
int				abs(int i);
void			move_a(t_stack_list *s, int i);
void			move_b(t_stack_list *s, int i);
int				get_min_m(int pos, int size);

/*utils*/
int				is_nbr(char *str);
int				is_dup(int nb, int array[], int size);
int				str_to_array(int array[], char *str[], int size);
int				error(void);

#endif