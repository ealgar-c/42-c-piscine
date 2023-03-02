/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:01:32 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/08 17:05:20 by joruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_number(char n1, char n2, char n3, char n4)
{
	while (n4 <= '9')
	{
		write(1, &n1, 1);
		write(1, &n2, 1);
		write(1, " ", 1);
		write(1, &n3, 1);
		write(1, &n4, 1);
		if (n1 != '9' || n2 != '8')
			write(1, ", ", 2);
		n4++;
	}
}

void	ft_print_comb2(void)
{
	char	n1;
	char	n2;
	char	n3;
	char	n4;

	n1 = '0';
	while (n1 <= '9')
	{
		n2 = '0';
		n3 = n1;
		while (n2 <= '9')
		{
			n4 = n2 + 1;
			while (n3 <= '9')
			{
				write_number(n1, n2, n3, n4);
				n4 = '0';
				n3++;
			}
			n3 = n1;
			n2++;
		}
		n1++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
