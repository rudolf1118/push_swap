#include "push_swap.h"

void	swap(t_stack_node **head)
{
	int len;
	t_stack_node *temp;
	len = stack_len(*head);
	if (!(*head) || !head || len == 1)
		return ;
	temp = (*head)->next;
	(*head)->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = *head;
	temp->next = (*head);
	temp->prev = NULL;
	(*head)->prev = temp;
	(*head) = temp;
}

void	sa(t_stack_node	**a, bool checker)
{
    swap(a);
    if (!checker)
        write(1, "sa\n", 3);
}

void	sb(t_stack_node **b, bool checker)
{
    swap(b);
    if (!checker)
        write(1, "sb\n", 3);
}

void	ss(t_stack_node **a, t_stack_node **b, bool checker)
{
    swap(a);
    swap(b);
    if (!checker)
        write(1, "ss\n", 3);
}