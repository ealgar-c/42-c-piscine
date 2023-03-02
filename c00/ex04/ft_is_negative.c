/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:03:36 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/07 20:47:11 by joruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_is_negative(int n)

{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

/*int	main(void)
{
	ft_is_negative(0);
	return (0);
}*/
