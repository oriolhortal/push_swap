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

void	to_b(t_stack **a, t_stack *piv, int chunk, int size_chunks)
{
	while (*a && (*a)->index > ((size_chunks) * (chunk + 1)))
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

t_stack	*update_a_b_piv(t_stack **a, int *chunk, int size_chunks)
{
	(*chunk)++;
	return (near_edge(a, *chunk, size_chunks));
}

void	fill_chunk_a_to_b(t_stack **a, t_stack **b, \
		int chunk, int size_chunks)
{
	int		size;
	t_stack	*piv;

	size = ft_stacksize(*a);
	while (*a)
	{
		piv = near_edge(a, chunk, size_chunks);
		if (piv->pos < ft_stacksize(*a) / 2)
			to_b(a, piv, chunk, size_chunks);
		else
			while (*a && (*a)->index > ((size_chunks) * (chunk + 1)))
				rra(a);
		pb(b, a);
		if (ft_stacksize(*b) > 1 && (*b)->index < ((size_chunks) / 2) \
				+ ((size_chunks) * chunk))
		{
			if ((ft_stacksize(*a) > 1 && (ft_stacksize(*a) \
							+ ((size_chunks) * (chunk + 1))) + 1) == size)
				piv = update_a_b_piv(a, &chunk, size_chunks);
			to_a(a, b, piv);
		}
		if (((ft_stacksize(*a) + ((size_chunks) * (chunk + 1))) + 1) == size)
			chunk++;
	}
}
