/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohortal- <ohortal-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 13:32:29 by ohortal-          #+#    #+#             */
/*   Updated: 2023/11/05 13:35:46 by ohortal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*top;
	t_stack	*tmp;

	(void)argc;
	if (argc < 2)
		return (0);
	top = generate_a(argv);
	tmp = NULL;
	if (!top)
	{
		ft_putstr_fd("Error\n", 1);
		return (-1);
	}
	sort(&top, &tmp);
	freestack(&top);
	freestack(&tmp);
	return (0);
}
