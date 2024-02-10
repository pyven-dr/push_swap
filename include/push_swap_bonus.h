/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyven-dr <pyven-dr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 02:26:05 by pyven-dr          #+#    #+#             */
/*   Updated: 2024/02/10 02:26:05 by pyven-dr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <errno.h>

typedef struct s_stack
{
	int	*st_a;
	int	*st_b;
	int	size_a;
	int	size_b;
	int	size;
}	t_stack;

void	error(t_stack *stack);
void	init_stack(t_stack *stack, int size);
void	parsing(t_stack *stack, char **args, int size);
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
void	read_instruct(t_stack *stack);
int		is_sorted(t_stack *stack);

#endif
