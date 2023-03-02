/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:39:22 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/15 11:23:55 by joruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	letras;

	letras = 0;
	while (str[letras] != '\0')
	{
	letras++;
	}
	return (letras);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*a;

	a = "Holaaaaaaa";
	ft_strlen(a);
	printf("%d", ft_strlen(a));
}*/
