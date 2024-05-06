/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_initial.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rharutyu <rharutyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:16:29 by rharutyu          #+#    #+#             */
/*   Updated: 2024/04/29 18:59:12 by rharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	arenotsingleinstack(t_stack_node *head, int number)
{
	if (!head)
		return (0);
	while (head)
	{
		if (head->number == number)
			return (1);
		head = head->next;
	}
	return (0);
}

int	countdigits(char *number)
{
	int	count;

	count = 0;
	while (number[count++])
		;
	if (count > 10)
		return (0);
	return (1);
}

void	stack_initial(t_stack_node **a, char **arg, bool checker)
{
	long long	numb;
	int			i;
	int			check;

	i = 0;
	while (arg[i])
	{
		if (error_syntax(arg[i]))
			error_free(a, arg, checker);
		if (!countdigits(arg[i]))
			error_free(a, arg, checker);
		numb = ft_atol(arg[i]);
		if (numb > 2147483647 || numb < -2147483648)
			error_free(a, arg, checker);
		if (arenotsingleinstack(*a, (int)numb))
			error_free(a, arg, checker);
		append_node(a, (int)numb);
		i++;
	}
	if (checker)
		free_argv(arg);
}
