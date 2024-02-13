/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
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
	return (0);
}

int	sb(t_stack *stack)
{
	if (stack->size_b < 2)
		return (1);
	swap(stack->st_b, stack->size_a);
	return (0);
}

int	ss(t_stack *stack)
{
	if (stack->size_a > 1)
		swap(stack->st_a, stack->size_b);
	if (stack->size_b > 1)
		swap(stack->st_b, stack->size_a);
	return (0);
}
