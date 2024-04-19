#include "push_swap.h"

void rotate(t_stack_node **head)
{
    t_stack_node *temp;
    t_stack_node *last;
    int len;

    len = stack_len(*head);
	if (head == NULL || *head == NULL || len == 1)
		return ;
    temp = (*head)->next;
    last = find_last_node(*head);
    last->next = *head;
    (*head)->prev = last;
    (*head)->next = NULL;
    (*head)->prev = last;
    (*head) = temp;
    (*head)->prev = NULL;
}

void	ra(t_stack_node **a, bool checker)
{
	rotate(a);
	if (!checker)
		write(1, "ra\n", 3);
}

void	rb(t_stack_node **b, bool checker)
{
	rotate(b);
	if (!checker)
		write(1, "rb\n", 3);
}

void	rr(t_stack_node **a, t_stack_node **b, bool checker)
{
	rotate(a);
	rotate(b);
	if (!checker)
		write(1, "rr\n", 3);
}