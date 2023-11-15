/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohortal- <ohortal-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:59:26 by ohortal-          #+#    #+#             */
/*   Updated: 2023/11/07 15:05:22 by ohortal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	push_stack(t_stack **stack_to, t_stack **stack_from)
{
	t_stack	*b;

	b = pop(stack_from);
	if (b)
		push(stack_to, b);
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	push_stack(stack_a, stack_b);
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_stack **stack_b, t_stack **stack_a)
{
	push_stack(stack_b, stack_a);
	ft_putstr_fd("pb\n", 1);
}

void	printstack(t_stack *head)
{
	t_stack	*tmp;

	tmp = head;
	while (tmp != NULL)
	{
		ft_putnbr_fd(tmp->value, 1);
		ft_putstr_fd(", ", 1);
		tmp = tmp->next;
	}
	ft_putendl_fd("", 1);
}
