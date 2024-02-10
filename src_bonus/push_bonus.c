/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyven-dr <pyven-dr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 06:45:09 by pyven-dr          #+#    #+#             */
/*   Updated: 2024/02/02 06:45:09 by pyven-dr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pa(t_stack *stack)
{
	if (stack->size_b == 0)
		return (1);
	stack->st_a[stack->size_b - 1] = stack->st_b[stack->size_a];
	stack->st_b[stack->size_a] = '\0';
	stack->size_b--;
	stack->size_a++;
	return (0);
}

int	pb(t_stack *stack)
{
	if (stack->size_a == 0)
		return (1);
	stack->st_b[stack->size_a - 1] = stack->st_a[stack->size_b];
	stack->st_a[stack->size_b] = '\0';
	stack->size_a--;
	stack->size_b++;
	return (0);
}
