#include "push_swap.h"

void stack_initial (t_stack_node **a, char **arg)
{
    long numb;
    int i;

    i = 0;
    while (*arg)
    {
        numb = ft_atol(arg[i]);
        if (numb > 2147483647 || numb < -2147483648)
            errorforfree(a, arg);
        if (arenotingleinstack(*a, (int)numb))
            errorforfree(a, arg);
        append_node(a, (int)numb);
        i++;
    } 
}