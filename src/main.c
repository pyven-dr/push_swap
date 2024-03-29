/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyven-dr <pyven-dr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 02:47:11 by pyven-dr          #+#    #+#             */
/*   Updated: 2024/02/01 02:47:11 by pyven-dr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (stack == NULL)
		exit(1);
	init_stack(stack, argc - 1);
	parsing(stack, argv + 1, argc - 1);
	if (argc > 2)
	{
		adjust_values(stack);
		if (is_sorted(stack) == 1)
			sort(stack);
	}
	free(stack->st_a);
	free(stack->st_b);
	free(stack);
	return (0);
}
