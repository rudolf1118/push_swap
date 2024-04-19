#include "push_swap.h"
void print_numbers(t_stack_node *a)
{
    while (a)
    {
        printf("number from stack equal to %d\n", a->number);
        a = a->next;
    }
}