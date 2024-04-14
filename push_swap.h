#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct   s_stack_node {
    int number;
    int current_position;
    int final_index;
    int push_price;
    struct s_stack_node *next;
    struct s_stack_node *prev;
    struct s_stack_node *this_node;
} t_stack_node;


#endif