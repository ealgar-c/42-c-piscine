/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:00:28 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/19 21:47:29 by joruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	prime[] = "Hola que tal";
	char	segun[] = "Hello";

	printf("\nEl primer String es %s\n", prime);
	printf("El segundo String es %s\n\n", segun);
	printf("ft_strncpy hasta n3 devuelve %s\n\n", ft_strncpy(prime, segun, 3));
	return (0);
}*/
