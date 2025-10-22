/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenlee <jenlee@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:04:00 by jenlee            #+#    #+#             */
/*   Updated: 2025/10/18 18:33:55 by jenlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

void	radix_sort(t_stack **a, t_stack **b, int size, int *counter)
{
	int	i;
	int	j;
	int	max_bits;

	i = 0;
	max_bits = get_max_bits(size, 0);
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			radix_handle_bit(a, b, counter, i);
			j++;
		}
		radix_pushback(a, b, counter);
		i++;
	}
}
