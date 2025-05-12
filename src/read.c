#include "pushswap.h"

void	ft_print_stack(t_stack *stack)
{
	if(!stack)
	{
		ft_printf("Stack is empty\n");
		return;
	}
	t_stack *current = stack;
	while(current)
	{
		ft_printf("%d ", current->num);
		current = current->next;
	}
	ft_printf("\n");

}
