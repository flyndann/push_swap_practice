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

int	ft_stack_size(t_stack *stack)
{
	int count = 0;
	while(stack)
	{
		count++;
		stack = stack->next;
	}
		return count;
}

int	ft_is_sorted(t_stack *stack)
{
	if(!stack)
		return 1;
	while(stack->next)
	{
		if(stack->num >stack->next->num)
			return 0;
	stack = stack->next;
	}
	return 1;
}
