/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyven-dr <pyven-dr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 05:40:19 by pyven-dr          #+#    #+#             */
/*   Updated: 2024/02/10 05:40:19 by pyven-dr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_stack *stack)
{
	if (stack->size_a == 2)
		sa(stack);
	else if (stack->size_a == 3)
		sort_3(stack);
	else
	{
		push_b(stack);
		sort_3(stack);
		push_a(stack);
	}
}
