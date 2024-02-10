/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyven-dr <pyven-dr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 02:25:08 by pyven-dr          #+#    #+#             */
/*   Updated: 2024/02/10 02:25:08 by pyven-dr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (stack == NULL)
		exit(1);
	init_stack(stack, argc - 1);
	parsing(stack, argv + 1, argc - 1);
	if (argc > 1)
	{
		read_instruct(stack);
		if (is_sorted(stack) == 1)
		{
			if (write(1, "KO\n", 3) == -1)
				error(stack);
		}
		else
		{
			if (write(1, "OK\n", 3) == -1)
				error(stack);
		}
	}
	free(stack->st_a);
	free(stack->st_b);
	free(stack);
	return (0);
}
