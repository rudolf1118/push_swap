#include "push_swap.h"

void reverse_rotate(t_stack_node **head)
{
    t_stack_node *temp;
    t_stack_node *last;
    
    temp = (*head)->next;
    last = find_last_node(*head);
    last->prev->next = NULL;
    last->next = (*head);
    last->prev = NULL;
    temp->prev = last;
    last->next->prev = last;
    *head = last;
}

void	rra(t_stack_node **a, bool checker)
{
	reverse_rotate(a);
	if (!checker)
		write(1, "rra\n", 4);
}

void	rrb(t_stack_node **b, bool checker)
{
	reverse_rotate(b);
	if (!checker)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack_node **a, t_stack_node **b, bool checker)
{
	reverse_rotate(a);
	reverse_rotate(b);
	if (!checker)
		write(1, "rrr\n", 4);
}