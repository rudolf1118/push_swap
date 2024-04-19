#include "push_swap.h"


void setting_target(t_stack_node *a, t_stack_node *b) {
    t_stack_node *current_a;
    t_stack_node *target_node;
    long best_match_index;

    while (b) {
        best_match_index = LONG_MAX;
        current_a = a;

        while (current_a) {
            if (current_a->number > b->number &&
                current_a->number < best_match_index) {
                best_match_index = current_a->number;
                target_node = current_a;
            }
            current_a = current_a->next;
        }

        if (best_match_index == LONG_MAX)
            b->target = find_smallest(a);
        else
            b->target = target_node;

        b = b->next;
    }
}



void setting_current_position (t_stack_node *node)
{
    int index;
    int center;

    index = 0;
    if (!node)
        return ;
    center = stack_len(node) / 2;
    while (node)
    {
        node ->current_position = index;
        if (index <= center)
            node->above_middle = true;
        else
            node->above_middle = false;
        node = node->next;
        index++;
    }
}

void	setting_cheapest(t_stack_node *b)
{
    long			best_match_value;
    t_stack_node	*best_match_node;

    if (NULL == b)
        return ;
    best_match_value = LONG_MAX;
    while (b)
    {
        if (b->push_price < best_match_value)
        {
            best_match_value = b->push_price;
            best_match_node = b;
        }
        b = b->next;
    }
    best_match_node->cheapest = true;
}

void setting_price (t_stack_node *a, t_stack_node *b)
{
    int	len_a;
    int	len_b;

    len_a = stack_len(a);
    len_b = stack_len(b);
    while (b)
    {
        b->push_price = b->current_position;
        if (!(b->above_middle))
            b->push_price = len_b - (b->current_position);
        if (b->target->above_middle)
            b->push_price += b->target->current_position;
        else
            b->push_price += len_a - (b->target->current_position);
        b = b->next;
    }
}

void	init_nodes(t_stack_node *a, t_stack_node *b)
{

    setting_current_position(a);
    setting_current_position(b);
    setting_target(a, b);
    setting_price(a, b);
    setting_cheapest(a);

}