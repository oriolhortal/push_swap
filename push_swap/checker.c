/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohortal- <ohortal-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:09:49 by ohortal-          #+#    #+#             */
/*   Updated: 2023/11/07 12:35:30 by ohortal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static void	check_a_b(t_stack **a, t_stack **b)
{
	if (ft_is_order(*a) && !*b)
		ft_putstr_fd("Ok\n", 1);
	else
		ft_putstr_fd("Ko\n", 1);
}

static int	free_all(t_stack **a, t_stack **b, char **line)
{
	free(*line);
	freestack(a);
	freestack(b);
	return (0);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	*line;

	if (argc < 2)
		return (0);
	b = NULL;
	a = generate_a(argv);
	if (a)
	{
		line = get_next_line(0);
		while (line)
		{
			if (process_move(&a, &b, line))
				return (free_all(&a, &b, &line));
			free(line);
			line = get_next_line(0);
		}
		check_a_b(&a, &b);
	}
	else
		ft_putstr_fd("Error\n", 1);
	return (free_all(&a, &b, &line));
}
