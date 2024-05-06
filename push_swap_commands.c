/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_commands.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rharutyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:12:13 by rharutyu          #+#    #+#             */
/*   Updated: 2024/04/29 14:12:14 by rharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	untilthreefroma(t_stack_node **a, t_stack_node **b)
{
	int	len;

	len = stack_len(*a) + 1;
	while (--len != 3)
		pb(b, a, false);
}

void	casewithlenfive(t_stack_node **a, t_stack_node **b)
{
	while (stack_len(*a) > 3)
	{
		init_nodes(*a, *b);
		finish(a, find_smallest(*a), 'a');
		pb(b, a, false);
	}
}

void	push_swap(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*smallest;

	if (stack_len(*a) == 5)
		casewithlenfive(a, b);
	else
		untilthreefroma(a, b);
	tiny_sort(a);
	while (*b)
	{
		init_nodes(*a, *b);
		moving(a, b);
	}
	setting_current_position(*a);
	smallest = find_smallest(*a);
	if (smallest->above_middle)
		while (*a != smallest)
			ra(a, false);
	else
		while (*a != smallest)
			rra(a, false);
}
