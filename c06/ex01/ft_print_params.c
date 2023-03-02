/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:26:08 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/22 21:28:49 by joruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char const *argv[])
{
	int		i;
	int		length;

	i = 1;
	length = 0;
	while (i < argc)
	{
		while (argv[i][length])
			length++;
		write(1, argv[i], length);
		write(1, "\n", 1);
		length = 0;
		i++;
	}
	return (0);
}
