/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rharutyu <rharutyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:11:23 by rharutyu          #+#    #+#             */
/*   Updated: 2024/04/29 18:31:51 by rharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack_node
{
	int					number;
	int					current_position;
	int					push_price;
	bool				above_middle;
	bool				cheapest;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
	struct s_stack_node	*target;
}						t_stack_node;

void					swap(t_stack_node **head);
void					rotate(t_stack_node **head);
void					reverse_rotate(t_stack_node **head);
char					**ft_split(char const *s, char c);
void					error_free(t_stack_node **a, char **argv,
							bool flag_argc_2);
void					append_node(t_stack_node **stack, int nbr);
int						stack_len(t_stack_node *node);
t_stack_node			*find_last_node(t_stack_node *node);
long long				ft_atol(const char *str);
void					stack_initial(t_stack_node **a, char **arg,
							bool checker);
void					push(t_stack_node **dest, t_stack_node **src);
void					free_stack(t_stack_node **stack);
void					free_argv(char **argv);
int						error_syntax(char *str_nbr);
int						sorted_stack(t_stack_node *a);
void					sa(t_stack_node **a, bool checker);
void					sb(t_stack_node **b, bool checker);
void					ss(t_stack_node **a, t_stack_node **b, bool checker);
void					rra(t_stack_node **a, bool checker);
void					rrb(t_stack_node **b, bool checker);
void					rrr(t_stack_node **a, t_stack_node **b, bool checker);
void					ra(t_stack_node **a, bool checker);
void					rb(t_stack_node **b, bool checker);
void					rr(t_stack_node **a, t_stack_node **b, bool checker);
void					pa(t_stack_node **a, t_stack_node **b, bool checker);
void					pb(t_stack_node **b, t_stack_node **a, bool checker);
void					tiny_sort(t_stack_node **a);
void					push_swap(t_stack_node **a, t_stack_node **b);
int						find_min(t_stack_node *a);
int						find_max(t_stack_node *a);
t_stack_node			*find_smallest(t_stack_node *stack);
void					setting_target(t_stack_node *a, t_stack_node *b);
void					setting_current_position(t_stack_node *node);
void					setting_price(t_stack_node *a, t_stack_node *b);
void					init_nodes(t_stack_node *a, t_stack_node *b);
void					rotate_both(t_stack_node **a, t_stack_node **b,
							t_stack_node *cheapest_node);
void					moving(t_stack_node **a, t_stack_node **b);
void					finish(t_stack_node **stack, t_stack_node *top,
							char name);
char					*get_next_line(int fd);
#endif
