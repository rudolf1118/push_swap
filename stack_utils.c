#include "push_swap.h"

long ft_atol (const char *str)
{
    int i;
    long num;
    int minus;

    minus = 1;
    num = 0;
    i = 0;
    if (!str)
        return (0);
    while ( str[i] && (str[i] == 32 || str[i] == '\t'
            || str[i] == '\n' || str[i] == '\r' 
            || str[i] == '\v' || str[i] == '\f'))
            {
            i++;
            }
    if (str[i] == '+')
        i++;
    else if (str[i] == '-')
    {
        minu *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
        num = (num * 10) + (str[i++] - '0');
    return (minus * num);
}


t_stack_node *find_last_node(t_stack_node *node)
{
    t_stack_node *head;

    if (!head)
        return (NULL);
    while (head->next != NULL)
        head = head->next;
    return (head);
}

void append_node (t_stack_node **stack, int numb)
{
    t_stack_node *node;
    t_stack_node *last;

    if (!stack)
        return ;
    node = malloc(sizeof(t_stack_node));
    if (!node)
        return ;
    node->next = NULL;
    node->number = numb;
    if (!*stack)
    {
        *stack = node;
        node ->prev = NULL;
    }
    else
    {
        last = find_last_node(*stack);
        last->next = node;
        node->prev = last;
        node->next = NULL;   
    }

}

int stack_len (t_stack_node *node)
{
    int i = 0;

    while (node)
    {
        i++;
        node = node->next;
    }
    return (i);
}