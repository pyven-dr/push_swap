/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyven-dr <pyven-dr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 08:50:51 by pyven-dr          #+#    #+#             */
/*   Updated: 2024/02/02 08:50:51 by pyven-dr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(int *stack, int size_all, int size)
{
	int		i;
	int		last_elem;

	i = size_all - 1;
	last_elem = stack[i];
	while (i - 1 > size - 1)
	{
		stack[i] = stack[i - 1];
		i--;
	}
	stack[i] = last_elem;
}

int	rra(t_stack *stack)
{
	if (stack->size_a < 2)
		return (1);
	reverse_rotate(stack->st_a, stack->size, stack->size_b);
	if (write(1, "rra\n", 4) == -1)
		return (1);
	return (0);
}

int	rrb(t_stack *stack)
{
	if (stack->size_b < 2)
		return (1);
	reverse_rotate(stack->st_b, stack->size, stack->size_a);
	if (write(1, "rrb\n", 4) == -1)
		return (1);
	return (0);
}

int	rrr(t_stack *stack)
{
	if (stack->size_a > 1)
		reverse_rotate(stack->st_a, stack->size, stack->size_b);
	if (stack->size_b > 1)
		reverse_rotate(stack->st_b, stack->size, stack->size_a);
	if (write(1, "rrr\n", 4) == -1)
		return (1);
	return (0);
}
