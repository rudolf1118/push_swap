/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_moving.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rharutyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:13:47 by rharutyu          #+#    #+#             */
/*   Updated: 2024/04/29 14:14:14 by rharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_both(t_stack_node **a, t_stack_node **b,
		t_stack_node *cheapest_node)
{
	if (!(*a) || !(*b) || !cheapest_node)
		return ;
	while (*b != cheapest_node && *a != cheapest_node->target)
		rr(a, b, false);
	setting_current_position(*a);
	setting_current_position(*b);
}

void	reverse_rotate_both(t_stack_node **a, t_stack_node **b,
		t_stack_node *cheapest_node)
{
	if (!(*a) || !(*b) || !cheapest_node)
		return ;
	while (*b != cheapest_node && *a != cheapest_node->target)
		rrr(a, b, false);
	setting_current_position(*a);
	setting_current_position(*b);
}

t_stack_node	*return_cheapest(t_stack_node *stack)
{
	if (!stack)
		return (NULL);
	while (stack)
	{
		if (stack->cheapest)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

void	finish(t_stack_node **stack, t_stack_node *top, char name)
{
	while (*stack != top)
	{
		if (name == 'a')
		{
			if (top->above_middle)
				ra(stack, false);
			else
				rra(stack, false);
		}
		else if (name == 'b')
		{
			if (top->above_middle)
				rb(stack, false);
			else
				rrb(stack, false);
		}
	}
}

void	moving(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*cheapest_node;

	if (!(*a) || !(*b))
		return ;
	cheapest_node = return_cheapest(*b);
	if (cheapest_node->above_middle && cheapest_node->target->above_middle)
		rotate_both(a, b, cheapest_node);
	else if (!(cheapest_node->above_middle)
		&& !(cheapest_node->target->above_middle))
		reverse_rotate_both(a, b, cheapest_node);
	finish(a, cheapest_node->target, 'a');
	finish(b, cheapest_node, 'b');
	pa(a, b, false);
}
