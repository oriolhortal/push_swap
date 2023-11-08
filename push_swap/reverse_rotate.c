/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohortal- <ohortal-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:53:52 by ohortal-          #+#    #+#             */
/*   Updated: 2023/11/07 14:58:55 by ohortal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	reverserotate(t_stack **stack)
{
	t_stack	*last;
	t_stack	*pre;

	last = *stack;
	while (last && (last)->next)
	{
		pre = last;
		last = (last)->next;
	}
	pre->next = NULL;
	if (last != NULL)
		push(stack, last);
}

void	rra(t_stack **stack_a)
{
	reverserotate(stack_a);
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_stack **stack_b)
{
	reverserotate(stack_b);
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	reverserotate(stack_a);
	reverserotate(stack_b);
	ft_putstr_fd("rrr\n", 1);
}
