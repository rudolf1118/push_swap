#include "push_swap.h"

int	error_syntax(char *str_nbr)
{
    if (!(*str_nbr == '+'
          || *str_nbr == '-'
          || (*str_nbr >= '0' && *str_nbr <= '9')))
        return (1);
    if ((*str_nbr == '+'
         || *str_nbr == '-')
        && !(str_nbr[1] >= '0' && str_nbr[1] <= '9'))
        return (1);
    while (*++str_nbr)
    {
        if (!(*str_nbr >= '0' && *str_nbr <= '9'))
            return (1);
    }
    return (0);
}

void	free_argv(char **argv)
{
    int	i;

    i = 0;
    if (!argv || !(*argv))
        return ;
    while (argv[i])
        free(argv[i++]);
    free(argv);
}

void	free_stack(t_stack_node **stack)
{
    t_stack_node	*tmp;
    t_stack_node	*current;

    if (!stack)
        return ;
    current = *stack;
    while (current)
    {
        tmp = current->next;
        free(current);
        current = tmp;
    }
    *stack = NULL;
}


void	error_free(t_stack_node **a, char **argv, bool checker)
{
    free_stack(a);
    if (checker)
        free_argv(argv);
    write(2, "Error\n", 6);
    exit(1);
}