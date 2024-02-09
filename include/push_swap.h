/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyven-dr <pyven-dr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 05:50:27 by pyven-dr          #+#    #+#             */
/*   Updated: 2024/02/01 05:50:27 by pyven-dr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "libft.h"
# include <limits.h>

typedef struct s_stack
{
	int	*st_a;
	int	*st_b;
	int	size_a;
	int	size_b;
	int	size;
}	t_stack;

void	parsing(t_stack *stack, char **args, int size);
void	init_stack(t_stack *stack, int size);
int		sa(t_stack *stack);
int		sb(t_stack *stack);
int		ss(t_stack *stack);
int		pa(t_stack *stack);
int		pb(t_stack *stack);
int		ra(t_stack *stack);
int		rb(t_stack *stack);
int		rr(t_stack *stack);
int		rra(t_stack *stack);
int		rrb(t_stack *stack);
int		rrr(t_stack *stack);
int		is_sorted(t_stack *stack);
void	push_b(t_stack *stack);
int		adjust_values(t_stack *stack);
int		find_biggest(int *stack, int size);
void	push_a(t_stack *stack);
void	sort_3(t_stack *stack);

#endif