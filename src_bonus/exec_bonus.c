/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyven-dr <pyven-dr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 04:19:25 by pyven-dr          #+#    #+#             */
/*   Updated: 2024/02/10 04:19:25 by pyven-dr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static int	exec(t_stack *stack, char *instruct)
{
	if (ft_strcmp(instruct, "sa\n") == 0)
		sa(stack);
	else if (ft_strcmp(instruct, "sb\n") == 0)
		sb(stack);
	else if (ft_strcmp(instruct, "ss\n") == 0)
		ss(stack);
	else if (ft_strcmp(instruct, "pa\n") == 0)
		pa(stack);
	else if (ft_strcmp(instruct, "pb\n") == 0)
		pb(stack);
	else if (ft_strcmp(instruct, "ra\n") == 0)
		ra(stack);
	else if (ft_strcmp(instruct, "rb\n") == 0)
		rb(stack);
	else if (ft_strcmp(instruct, "rr\n") == 0)
		rr(stack);
	else if (ft_strcmp(instruct, "rra\n") == 0)
		rra(stack);
	else if (ft_strcmp(instruct, "rrb\n") == 0)
		rrb(stack);
	else if (ft_strcmp(instruct, "rrr\n") == 0)
		rrr(stack);
	else
		return (1);
	return (0);
}

void	read_instruct(t_stack *stack)
{
	char	*instruct;

	instruct = get_next_line(0);
	if (errno != 0)
	{
		free(instruct);
		error(stack);
	}
	while (instruct != NULL)
	{
		if (exec(stack, instruct) == 1)
		{
			free(instruct);
			error(stack);
		}
		free(instruct);
		instruct = get_next_line(0);
		if (errno != 0)
		{
			free(instruct);
			error(stack);
		}
	}
}
