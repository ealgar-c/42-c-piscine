/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:39:22 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/23 16:33:37 by joruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	j;

	i = nb;
	j = 2;
	if (nb <= 1)
		return (0);
	while (nb >= 2)
	{
		while (nb / i && nb / 1 && j <= nb / j)
		{
			if (nb % j == 0)
				return (0);
			else if (nb % j != 0)
				j++;
		}
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	int	nb = 2147483647;
	int	r = ft_is_prime(nb);

	printf("%d es primo si devuelve 1, sino es 0. Es %d", nb, r);
	return (0);
}*/
