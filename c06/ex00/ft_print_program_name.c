/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:25:42 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/22 21:29:13 by joruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char const *argv[])
{
	int	length;

	length = 0;
	while (argv[argc - argc][length])
		length++;
	write(1, argv[argc - argc], length);
	write(1, "\n", 1);
	return (0);
}
