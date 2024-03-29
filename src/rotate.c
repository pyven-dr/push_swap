/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyven-dr <pyven-dr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 08:28:31 by pyven-dr          #+#    #+#             */
/*   Updated: 2024/02/02 08:28:31 by pyven-dr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(int *stack, int size, int size_all)
{
	int		i;
	int		first_elem;

	i = size;
	first_elem = stack[i];
	while (i + 1 < size_all)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[i] = first_elem;
}

int	ra(t_stack *stack)
{
	if (stack->size_a < 2)
		return (1);
	rotate(stack->st_a, stack->size_b, stack->size);
	if (write(1, "ra\n", 3) == -1)
		return (1);
	return (0);
}

int	rb(t_stack *stack)
{
	if (stack->size_b < 2)
		return (1);
	rotate(stack->st_b, stack->size_a, stack->size);
	if (write(1, "rb\n", 3) == -1)
		return (1);
	return (0);
}

int	rr(t_stack *stack)
{
	if (stack->size_a > 1)
		rotate(stack->st_a, stack->size_b, stack->size);
	if (stack->size_b > 1)
		rotate(stack->st_b, stack->size_a, stack->size);
	if (write(1, "rr\n", 3) == -1)
		return (1);
	return (0);
}
