/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyven-dr <pyven-dr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 04:00:20 by pyven-dr          #+#    #+#             */
/*   Updated: 2024/02/10 04:00:54 by pyven-dr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	error(t_stack *stack)
{
	free(stack->st_a);
	free(stack->st_b);
	free(stack);
	if (write(1, "Error\n", 6) == -1)
		exit(1);
	exit(1);
}

void	init_stack(t_stack *stack, int size)
{
	stack->st_a = ft_calloc(size, sizeof(int *));
	if (stack->st_a == NULL)
	{
		free(stack);
		exit(1);
	}
	stack->st_b = ft_calloc(size, sizeof(int *));
	if (stack->st_b == NULL)
	{
		free(stack->st_a);
		free(stack);
		exit(1);
	}
	stack->size_a = size;
	stack->size_b = 0;
	stack->size = size;
}

static int	check_num(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '\0')
		return (1);
	if (num[0] == '-' && num[1])
		i++;
	while (num[i])
	{
		if (ft_isdigit(num[i]) == 0)
			return (1);
		i++;
	}
	return (0);
}

static int	check_dubs(t_stack *stack, long num, int nb_num)
{
	int	i;

	i = 0;
	while (i < nb_num)
	{
		if (stack->st_a[i] == num)
			return (1);
		i++;
	}
	return (0);
}

void	parsing(t_stack *stack, char **args, int size)
{
	int		i;
	long	num;

	i = 0;
	while (i < size)
	{
		if (check_num(args[i]) != 0)
			error(stack);
		num = ft_atol(args[i]);
		if (num > INT_MAX || num < INT_MIN)
			error(stack);
		if (check_dubs(stack, num, i) != 0)
			error(stack);
		stack->st_a[i] = (int)num;
		i++;
	}
}
