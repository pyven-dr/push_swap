/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyven-dr <pyven-dr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 04:11:39 by pyven-dr          #+#    #+#             */
/*   Updated: 2024/02/03 04:11:39 by pyven-dr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *stack)
{
	int	i;

	i = 1;
	while (i < stack->size_a)
	{
		if (stack->st_a[i - 1] > stack->st_a[i])
			return (1);
		i++;
	}
	return (0);
}
