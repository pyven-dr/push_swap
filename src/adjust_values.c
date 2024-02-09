/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adjust_values.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyven-dr <pyven-dr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 06:06:02 by pyven-dr          #+#    #+#             */
/*   Updated: 2024/02/04 06:06:02 by pyven-dr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	adjust_values(t_stack *stack)
{
	int	*new_tab;
	int	i;
	int	j;
	int	min;

	i = 0;
	new_tab = malloc(sizeof(int) * stack->size_a);
	if (new_tab == NULL)
		return (1);
	while (i < stack->size_a)
	{
		j = 0;
		min = 0;
		while (j < stack->size_a)
		{
			if (stack->st_a[i] > stack->st_a[j])
				min++;
			j++;
		}
		new_tab[i] = min;
		i++;
	}
	free(stack->st_a);
	stack->st_a = new_tab;
	return (0);
}
