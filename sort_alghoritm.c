#include "push_swap.h"

int sorted_stack (t_stack_node *a)
{
    if (!a)
        return (1);
    while (a->next)
    {
        if (a->number > a->next->number)
            return (0);
        a = a->next;
    }
    return (1);
}

int find_max (t_stack_node *a)
{
    int maximum;

    maximum = a->number;

    while (a)
    {
        if (maximum < a->number)
            maximum = a->number;
        a = a->next;
    }
    return (maximum);
}

void tiny_sort(t_stack_node **a)
{
    int highest_node;

    highest_node = find_max(*a);
    if (highest_node == (*a)->number)
        ra(a, false);
    else  if (highest_node == (*a)->next->number)
        rra(a, false);
    if ((*a)->number > (*a)->next->number)
        sa(a, false);
}