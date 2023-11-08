/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohortal- <ohortal-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:29:03 by ohortal-          #+#    #+#             */
/*   Updated: 2023/11/07 14:34:55 by ohortal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

t_stack	*ft_stacknew(int value)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->value = value;
	stack->index = -1;
	stack->pos = -1;
	stack->next = NULL;
	return (stack);
}

int	ft_stacksize(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

void	push(t_stack **top, t_stack *x)
{
	if (x)
	{
		x->next = *top;
		*top = x;
	}
	ft_update_pos(top);
}

t_stack	*pop(t_stack **top)
{
	t_stack	*x;

	if (*top)
	{
		x = (*top);
		*top = (*top)->next;
		x->next = NULL;
		return (x);
	}
	else
		return (NULL);
	ft_update_pos(top);
}
