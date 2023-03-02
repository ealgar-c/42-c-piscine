/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:44:20 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/15 16:07:44 by joruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}
/*
int main (void)
{
	int tab[8] = {5, 2, 1, 3, 4, 9, 7, 6};
	int size = sizeof(tab) / sizeof(tab[0]);
	int i = 0;
	ft_sort_int_tab(tab, size);
	printf("Array = [");
		while(i < size)
		{
			if(i< (size - 1))
				printf("%d, ", tab[i]);
			else
				printf("%d", tab[i]);
			i++;
		}
	printf("]\n");
}*/
