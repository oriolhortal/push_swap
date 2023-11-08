/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohortal- <ohortal-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:22:27 by ohortal-          #+#    #+#             */
/*   Updated: 2023/11/07 14:27:04 by ohortal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

long	ft_atol(const char *str)
{
	int					i;
	int					sig;
	unsigned long long	res;

	i = 0;
	sig = 1;
	res = 0;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sig *= -1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		if (res > __LONG_LONG_MAX__ && sig == 1)
			return (0);
		if (res > __LONG_LONG_MAX__ && sig == -1)
			return (-1);
		res = (str[i] - '0') + (res * 10);
		i++;
	}
	return (res * sig);
}
