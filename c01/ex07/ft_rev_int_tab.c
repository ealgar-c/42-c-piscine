/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:12:49 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/16 11:44:36 by joruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	temp;

	a = 0;
	while (a < size)
	{
		temp = tab[a];
		tab[a] = tab[size - 1];
		tab[size - 1] = temp;
		a++;
		size--;
	}
}
/*
int	main(void)
{
	int	tab[5] = {0, 1, 2, 3, 4};
	int	size = 5;

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}*/
