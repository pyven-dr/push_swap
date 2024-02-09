/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyven-dr <pyven-dr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 05:37:01 by pyven-dr          #+#    #+#             */
/*   Updated: 2024/02/04 05:37:01 by pyven-dr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_stack *stack)
{
	int	num;
	int	chunk;

	num = 0;
	chunk = (int)(0.000000053 * (stack->size_a * stack->size_a) \
				+ 0.03 * stack->size_a + 14.5);
	while (stack->size_a > 3)
	{
		if (stack->st_a[num] > stack->size - 4)
			ra(stack);
		else if (stack->st_a[num] <= num)
		{
			pb(stack);
			num++;
		}
		else if (stack->st_a[num] > num && stack->st_a[num] < num + chunk)
		{
			pb(stack);
			rb(stack);
			num++;
		}
		else if (stack->st_a[num] >= num + chunk)
			ra(stack);
	}
}
