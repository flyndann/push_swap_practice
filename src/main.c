#include "../libft/libft.h"
#include "pushswap.h"

int	main(int argc, char **argv)
{
	ft_printf("The program has started\n");

	t_stack	*stack_a = NULL;
	t_stack *stack_b = NULL;
	

	
	if(argc == 2)
		stack_a = ft_fill_stack(argv[1]);
	
	ft_print_stack(stack_a);
	ft_print_stack(stack_b);

	ft_pop(&stack_a);
	ft_printf("________________\n");
	ft_print_stack(stack_a);
	


	return(0);
}
