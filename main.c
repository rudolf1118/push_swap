#include "push_swap.h"

int main (int argc, char **argv) {
    t_stack_node *a = NULL;
    t_stack_node *b = NULL;
    char **arg;

    if (argc == 1 || (argc == 2 && !argv[1][0]))
        return (1);
    else if (argc == 2)
    {
        arg = ft_split(argv[1], ' ');
        stack_initial(&a, arg, true);
    }
    else
        stack_initial(&a, argv + 1, false);
    if (!sorted_stack(a))
    {
        if (stack_len(a) == 2)
            sa(&a, 0);
        else if (stack_len(a) == 3)
            tiny_sort(&a);
        else
            push_swap(&a, &b);
    }
    /*
    print_numbersb(b);
    print_numbersa(a);
    */
    free_stack(&b);
    free_stack(&a);
}