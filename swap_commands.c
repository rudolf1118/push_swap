#include "push_swap.h"

void swap(t_stack_node **head)
{
    int len;
    t_stack_node *temp;
    len = stack_len(*head);
    if (!(*head) || !head || len == 1)
        return ;
    temp = (*head)->next;
    (*head)->next = temp->next;
    if(temp->next != NULL)
        temp->next->prev = *head;
    temp->next = *head;
    temp->prev = NULL;
    (*head)->prev = temp;
    *head = temp;
}