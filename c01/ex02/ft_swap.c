/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:54:50 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/13 18:30:00 by joruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temporal;

	temporal = *a;
	*a = *b;
	*b = temporal;
}
/*
#include <stdio.h>
#include <unistd.h>
int	main(void)
{
	int	x;
	int	y;

	x = 5;
	y = 7;
	ft_swap(&x, &y);
	printf("%d\n", x);
	printf("%d", y);
}*/
