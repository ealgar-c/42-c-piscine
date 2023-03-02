/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 20:43:09 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/08 16:39:08 by joruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	n;

	n = '0';
	while (n <= '9')
	{
		write (1, &n, 1);
n = n + 1;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
