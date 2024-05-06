/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rharutyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:10:14 by rharutyu          #+#    #+#             */
/*   Updated: 2024/04/29 14:10:15 by rharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_numbersa(t_stack_node *a)
{
	while (a)
	{
		printf("number from stack a equal to -> %d\n", a->number);
		a = a->next;
	}
}

void	print_numbersb(t_stack_node *b)
{
	while (b)
	{
		printf("number from stack b equal to -> %d\n", b->number);
		b = b->next;
	}
}
