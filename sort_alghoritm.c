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

int find_max(t_stack_node *a)
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

t_stack_node  *find_smallest(t_stack_node *stack)
{
    long			smallest;
    t_stack_node	*smallest_node;

    if (!stack)
        return (NULL);
    smallest = LONG_MAX;
    while (stack)
    {
        if (stack->number < smallest)
        {
            smallest = stack->number;
            smallest_node = stack;
        }
        stack = stack->next;
    }
    return (smallest_node);
}

int find_min(t_stack_node *a)
{
    int minimum;

    minimum = a->number;

    while (a)
    {
        if (minimum < a->number)
            minimum = a->number;
        a = a->next;
    }
    return (minimum);
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