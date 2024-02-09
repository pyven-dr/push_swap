/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyven-dr <pyven-dr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 06:27:47 by pyven-dr          #+#    #+#             */
/*   Updated: 2024/02/02 06:27:47 by pyven-dr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(int *stack, int size)
{
	int	temp;

	temp = stack[size];
	stack[size] = stack[size + 1];
	stack[size + 1] = temp;
}

int	sa(t_stack *stack)
{
	if (stack->size_a < 2)
		return (1);
	swap(stack->st_a, stack->size_b);
	if (write(1, "sa\n", 3) == -1)
		return (1);
	return (0);
}

int	sb(t_stack *stack)
{
	if (stack->size_b < 2)
		return (1);
	swap(stack->st_b, stack->size_a);
	if (write(1, "sb\n", 3) == -1)
		return (1);
	return (0);
}

int	ss(t_stack *stack)
{
	if (stack->size_a < 2 || stack->size_b < 2)
		return (1);
	swap(stack->st_a, stack->size_b);
	swap(stack->st_b, stack->size_a);
	if (write(1, "ss\n", 3) == -1)
		return (1);
	return (0);
}
