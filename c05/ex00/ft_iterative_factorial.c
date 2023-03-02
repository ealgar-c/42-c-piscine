/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:32:06 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/23 16:47:44 by joruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	i;

	fact = 1;
	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
	fact = (fact * i);
		i++;
	}
	return (fact);
}
/*
int	main(void)
{
	int nb = 4;
	int f = ft_iterative_factorial(nb);
	printf("El Resultado de la operación del factorial de %d es %d", nb, f);
	return (0);
}*/
