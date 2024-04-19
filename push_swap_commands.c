#include "push_swap.h"
void untilthreefroma(t_stack_node **a, t_stack_node **b)
{
    int len;

    len = stack_len(*a) + 1;
    while (--len != 3)
        pb(b, a, false);
}

void	push_swap(t_stack_node **a, t_stack_node **b)
{
//    untilthreefroma(a, b);
//    tiny_sort(a);

//    t_stack_node *smallest;
    int len_a;
//
   len_a = stack_len(*a);
////    if (lenofa == 5)
////        handle_five(a,b);
// //   else
// //   {
//        untilthreefroma(a, b);
// //   }
//        tiny_sort(a);
//        setting_current_position(*b);
//        setting_price(*a,*b);
////        while (*b)
////        {
////
////        }

        while (len_a-- > 3)
            pb(b, a, false);
    tiny_sort(a);
    while (*b)
    {
        init_nodes(*a, *b);
    }
    setting_current_position(*a);
}