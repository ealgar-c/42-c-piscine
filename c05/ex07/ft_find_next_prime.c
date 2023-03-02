/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:40:01 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/23 16:31:29 by joruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	j;

	j = 2;
	if (nb <= 1)
		return (2);
	while (nb >= 2)
	{
		while (nb / nb && nb / 1 && j <= nb / j)
		{
			if (nb % j == 0)
			{
				nb++;
				j = 2;
			}
			else if (nb % j != 0)
				j++;
		}
		return (nb);
	}
	return (0);
}
/*
int	main(void)
{
	int	nb = 54;
	int	r = ft_find_next_prime(nb);

	printf("El siguiente primo de %d es %d", nb, r);
	return (0);
}*/
