/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:35:21 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/23 16:43:13 by joruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	sol;

	sol = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		sol = (sol * nb);
		power--;
	}
	return (sol);
}
/*
int main(void)
{
	int nb = 2;
	int power = 4;
	int p = ft_iterative_power(nb, power);

	printf("El resultado de la potencia de %d elevado a %d es %d", nb, power, p);
	return(0);
}*/
