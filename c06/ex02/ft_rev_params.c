/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:26:44 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/22 21:29:32 by joruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char const *argv[])
{
	int		i;
	int		length;

	i = argc - 1;
	length = 0;
	while (i > 0)
	{
		while (argv[i][length])
			length++;
		write(1, argv[i], length);
		write(1, "\n", 1);
		length = 0;
		i--;
	}
	return (0);
}
