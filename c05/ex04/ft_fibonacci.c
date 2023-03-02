/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:38:09 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/23 16:36:29 by joruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index -2) + ft_fibonacci(index - 1));
}
/*
int	main(void)
{
	int	index = 9;
	int	f = ft_fibonacci(index);

	printf("El resultado de la función Fibonacci de index %d es %d", index, f);
	return (0);
}*/
