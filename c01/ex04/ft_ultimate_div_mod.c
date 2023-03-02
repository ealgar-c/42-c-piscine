/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:36:21 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/13 19:14:27 by joruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temporal;

	temporal = *a;
	*a = *a / *b;
	*b = temporal % *b;
}
/*
#include <stdio.h>
int main(void)
{
	int	a;
	int	b;
	a = 240;
	b = 20;
	
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n%d\n", a, b);
	return (0);
}
*/
