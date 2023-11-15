/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohortal- <ohortal-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:14:42 by ohortal-          #+#    #+#             */
/*   Updated: 2023/11/07 14:21:56 by ohortal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

t_stack	*stackmax(t_stack *stack)
{
	t_stack	*max;

	max = stack;
	while (stack)
	{
		if (max->index < stack->index)
			max = stack;
		stack = stack->next;
	}
	return (max);
}

t_stack	*stackmin(t_stack *stack)
{
	t_stack	*min;

	min = stack;
	while (stack)
	{
		if (min->index > stack->index)
			min = stack;
		stack = stack->next;
	}
	return (min);
}

void	index_stack(t_stack **a)
{
	int		ix;
	int		size;
	t_stack	*tmp;
	t_stack	*pivot;

	pivot = *a;
	size = ft_stacksize(*a);
	while (size-- > 0)
	{
		ix = 0;
		tmp = *a;
		while (tmp)
		{
			if (pivot->value > tmp->value)
				ix++;
			tmp = tmp->next;
		}
		pivot->index = ix;
		pivot = pivot->next;
	}
}

void	ft_update_pos(t_stack **a)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = *a;
	while (tmp)
	{
		tmp->pos = i++;
		tmp = tmp->next;
	}
}
