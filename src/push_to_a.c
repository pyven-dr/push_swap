/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyven-dr <pyven-dr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 02:23:59 by pyven-dr          #+#    #+#             */
/*   Updated: 2024/02/05 02:23:59 by pyven-dr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	storage(t_stack *stack, int val_max)
{
	if (stack->st_a[stack->size - 1] == stack->size - 1)
	{
		pa(stack);
		ra(stack);
	}
	if (stack->st_a[stack->size - 1] < stack->st_b[stack->size_a] && \
		stack->st_b[stack->size_a] != val_max)
	{
		pa(stack);
		ra(stack);
	}
}

static void	bring_top(t_stack *stack, int max)
{
	int	val;

	val = stack->st_b[max];
	if (max - stack->size_a < stack->size_b / 2)
	{
		while (stack->st_b[stack->size_a] != val)
		{
			storage(stack, val);
			if (stack->st_b[stack->size_a] != val)
				rb(stack);
		}
	}
	else
	{
		while (stack->st_b[stack->size_a] != val)
		{
			storage(stack, val);
			if (stack->st_b[stack->size_a] != val)
				rrb(stack);
		}
	}
}

void	push_a(t_stack *stack)
{
	int	max;

	while (stack->size_b > 0)
	{
		max = find_biggest(stack->st_b, stack->size);
		while (stack->st_a[stack->size - 1] > stack->st_b[max] && \
				stack->st_a[stack->size - 1] != stack->size - 1)
			rra(stack);
		bring_top(stack, max);
		pa(stack);
	}
	while (stack->st_a[stack->size - 1] != stack->size - 1)
		rra(stack);
}
