/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohortal- <ohortal-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:42:48 by ohortal-          #+#    #+#             */
/*   Updated: 2023/11/07 13:10:42 by ohortal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	to_b(t_stack **a, t_stack *piv, int chunk, int size_chunk)
{
	while (*a && (*a)->index > ((size_chunk) * (chunk + 1)))
	{
		if ((*a)->next->index == piv->index)
			sa(a);
		else
			ra(a);
	}
}

void	to_a(t_stack **a, t_stack **b, t_stack *piv)
{
	if (ft_stacksize(*a) > 1 && (*a)->index != piv->index \
			&& piv->pos < ft_stacksize(*a) / 2)
		rr(a, b);
	else
		rb(b);
}

t_stack	*update_a_b_priv(t_stack **a, int *chunk, int size_chunk)
{
	(*chunk)++;
	return (near_edge(a, *chunk, size_chunk));
}

void	fill_chunk_a_to_b(t_stack **a, t_stack **b, \
		int chunk, int size_chunk)
{
	int		size;
	t_stack	*piv;

	size = ft_stacksize(*a);
	while (*a)
	{
		piv = near_edge(a, chunk, size_chunk);
		if (piv->pos < ft_stacksize(*a) / 2)
			to_b(a, piv, chunk, size_chunk);
		else
			while (*a && (*a)->index > ((size_chunk) * (chunk + 1)))
				rra(a);
		pb(b, a);
		if (ft_stacksize(*b) > 1 && (*b)->index < ((size_chunk) / 2) \
				+ ((size_chunk) * chunk))
		{
			if ((ft_stacksize(*a) > 1 && (ft_stacksize(*a) \
							+ ((size_chunk) * (chunk + 1))) + 1) == size)
				piv = update_a_b_priv(a, &chunk, size_chunk);
			to_a(a, b, piv);
		}
		if (((ft_stacksize(*a) + ((size_chunk) * (chunk + 1))) + 1) == size)
			chunk++;
	}
}
