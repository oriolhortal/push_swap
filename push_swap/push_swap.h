/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohortal- <ohortal-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:54:28 by ohortal-          #+#    #+#             */
/*   Updated: 2023/11/08 12:37:09 by ohortal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <stdio.h>

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	struct s_stack	*next;
}					t_stack;

int		ft_stacksize(t_stack *head);
int		ft_is_order(t_stack *a);
int		ft_str_cmp(char *s1, char *s2);
int		process_move(t_stack **a, t_stack **b, char *line);
long	ft_atol(const char *str);
void	push(t_stack **top, t_stack *x);
void	swap(t_stack **a);
void	push_stack(t_stack **stack_to, t_stack **stack_from);
void	rotate(t_stack **stack);
void	reverserotate(t_stack **stack);
void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_b, t_stack **stack_a);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);
void	index_stack(t_stack **a);
void	ft_update_pos(t_stack **a);
void	printstack(t_stack *head);
void	freestack(t_stack **top);
void	caso3(t_stack **a);
void	caso4(t_stack **a, t_stack **b);
void	caso5(t_stack **a, t_stack **b);
void	sort(t_stack **a, t_stack **b);
void	insertion_chunks_sort(t_stack **a, t_stack **b);
void	fill_chunk_a_to_b(t_stack **a, t_stack **b, int chunk, int size_chunk);
t_stack	*ft_stacknew(int value);
t_stack	*pop(t_stack **top);
t_stack	*ft_stacklast(t_stack *stack);
t_stack	*stackmin(t_stack *stack);
t_stack	*stackmax(t_stack *stack);
t_stack	*generate_a(char **arg);
t_stack	*near_edge(t_stack **a, int chunk, int s_chunk);

#endif
