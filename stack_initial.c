#include "push_swap.h"

int arenotsingleinstack(t_stack_node *head, int number) {
    if (NULL == head)
        return (0);
    while (head)
    {
        if (head->number == number)
            return (1);
        head = head->next;
    }
    return (0);
}

void	stack_initial(t_stack_node **a, char **arg, bool checker)
{
	long	numb;
	int		i;

	i = 0;
	while (arg[i])
	{
        if (error_syntax(arg[i]))
            error_free(a, arg, checker);
		numb = ft_atol(arg[i]);
		if (numb > 2147483647 || numb < -2147483648)
			error_free(a, arg, checker);
		if (arenotsingleinstack(*a, (int)numb))
            error_free(a, arg, checker);
		append_node(a, (int)numb);
		i++;
	}
    printf("checker = %d\n", checker);
    if (checker)
        free_argv(arg);
}

//int main() {
//    // Example usage
//    t_stack_node *head = NULL;
//    t_stack_node *node1 = (t_stack_node *)malloc(sizeof(t_stack_node));
//    t_stack_node *node2 = (t_stack_node *)malloc(sizeof(t_stack_node));
//    t_stack_node *node3 = (t_stack_node *)malloc(sizeof(t_stack_node));
//
//    // Assign some numbers to the nodes
//    node1->number = 10;
//    node2->number = 20;
//    node3->number = 10;
//
//    // Link the nodes
//    node1->next = node2;
//    node2->next = node3;
//    node3->next = NULL;
//
//    // Set head to the first node
//    head = node1;
//
//    // Test the function
//    int numberToCheck = 10;
//    int result = arenotsingleinstack(head, numberToCheck);
//    if (result)
//        printf("moremoremore");
//
//    // Free allocated memory
//    free(node1);
//    free(node2);
//    free(node3);
//
//    return 0;
//}