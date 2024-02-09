/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_biggest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyven-dr <pyven-dr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 02:14:33 by pyven-dr          #+#    #+#             */
/*   Updated: 2024/02/05 02:14:33 by pyven-dr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_biggest(int *stack, int size)
{
	int	max;
	int	i;

	i = 0;
	max = 0;
	while (i <= size - 1)
	{
		if (stack[i] > stack[max])
			max = i;
		i++;
	}
	return (max);
}
