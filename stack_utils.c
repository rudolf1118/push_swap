/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rharutyu <rharutyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:16:54 by rharutyu          #+#    #+#             */
/*   Updated: 2024/04/29 18:39:41 by rharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long long	ft_atol(const char *str)
{
	int			i;
	long long	num;
	int			minus;

	minus = 1;
	num = 0;
	i = 0;
	if (!str)
		return (0);
	while (str[i] && (str[i] == 32 || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f'))
	{
		i++;
	}
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		minus *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		num = (num * 10) + (str[i++] - '0');
	return (minus * num);
}

t_stack_node	*find_last_node(t_stack_node *node)
{
	t_stack_node	*head;

	head = node;
	if (!head)
		return (NULL);
	while (head->next != NULL)
		head = head->next;
	return (head);
}

int	stack_len(t_stack_node *node)
{
	int	i;

	i = 0;
	while (node)
	{
		i++;
		node = node->next;
	}
	return (i);
}

void	append_node(t_stack_node **head, int numb)
{
	t_stack_node	*temp;
	t_stack_node	*last;

	if (!head)
		return ;
	temp = malloc(sizeof(t_stack_node));
	if (!temp)
		return ;
	temp->number = numb;
	temp->next = NULL;
	if (!(*head))
	{
		*head = temp;
		temp->prev = NULL;
	}
	else
	{
		last = find_last_node(*head);
		last->next = temp;
		temp->prev = last;
	}
}
