#include "push_swap.h"

t_stack_node *return_cheapest(t_stack_node **b)
{
    t_stack_node *cheapest;
    int cheap;

    if (!(*b) || !b)
        return (NULL);
    cheap = (*b)->push_price;
    cheapest = *b;
    while (*b)
    {
        if ((*b)->cheapest)
            if (cheap > (*b)->push_price)
            {
                cheap = (*b)->push_price;
                cheapest = *b;
            }
        *b = (*b)->next;
    }
    return (cheapest);
}