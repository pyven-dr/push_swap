/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyven-dr <pyven-dr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 05:19:27 by pyven-dr          #+#    #+#             */
/*   Updated: 2024/02/07 05:19:27 by pyven-dr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stack *stack)
{
	int	max;
	int	max_value;

	max = find_biggest(stack->st_a, stack->size);
	max_value = stack->st_a[max];
	if (max == stack->size_b)
		ra(stack);
	else if (max == stack->size_b + 1)
		rra(stack);
	if (stack->st_a[stack->size_b] == max_value - 1)
		sa(stack);
}
