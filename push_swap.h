#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
typedef struct   s_stack_node {
    int number;
    int current_position;
    int final_index;
    int push_price;
    struct s_stack_node *next;
    struct s_stack_node *prev;
    struct s_stack_node *this_node;
} t_stack_node;

void swap(t_stack_node **head);
void rotate(t_stack_node **head);
void reverse_rotate(t_stack_node **head);
char	**ft_split(char const *s, char c);
void	error_free(t_stack_node **a, char **argv, bool flag_argc_2);
void	append_node(t_stack_node **stack, int nbr);
int stack_len (t_stack_node *node);
t_stack_node *find_last_node(t_stack_node *node);
long ft_atol (const char *str);
void	stack_initial(t_stack_node **a, char **arg, bool checker);
static void	push(t_stack_node **dest, t_stack_node **src);
void	free_stack(t_stack_node **stack);
void	free_argv(char **argv);
int	error_syntax(char *str_nbr);
int sorted_stack (t_stack_node *a);
void	sa(t_stack_node	**a, bool checker);
void	sb(t_stack_node **b, bool checker);
void	ss(t_stack_node **a, t_stack_node **b, bool checker);
void	rra(t_stack_node **a, bool checker);
void	rrb(t_stack_node **b, bool checker);
void	rrr(t_stack_node **a, t_stack_node **b, bool checker);
void	ra(t_stack_node **a, bool checker);
void	rb(t_stack_node **b, bool checker);
void	rr(t_stack_node **a, t_stack_node **b, bool checker);
void	pa(t_stack_node **a, t_stack_node **b, bool checker);
void	pb(t_stack_node **b, t_stack_node **a, bool checker);
void tiny_sort(t_stack_node **a);
// DELETE AT THE END
void print_numbers(t_stack_node *a);
// DELETE AT THE END

#endif