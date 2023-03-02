/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:33:40 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/19 21:46:00 by joruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	while (src[count])
		count++;
	i = 0;
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}
/*
int main(int argc, char const *argv[])
{
	char first[] = "Adios chicos";
	char second[] = "Hola chavales";
	printf("First string is %s\n", first);
	printf("Second string is %s\n\n", second);
	printf("ft_strlcpy ocupa %d \n\n", ft_strlcpy(first, second, 13));
	printf("Primer String sobrescrito:  %s\n", first);
	printf("Segundo String:  %s\n\n", second);
	return (0);
}*/
