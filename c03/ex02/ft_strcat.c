/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:10:51 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/21 20:34:37 by joruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)

{
	int	num;

	num = 0;
	while (str[num] != '\0')
	{
		num++;
	}
	return (num);
}

char	*ft_strcat(char *dest, char *src)
{
	int	size;

	size = ft_strlen(dest);
	while (*src)
	{
		dest[size] = *src;
		size++;
		src++;
	}
	dest[size] = '\0';
	return (dest);
}
/*
int	main(void)

{
	char	destino[41] = "Hola futuro destino";
	char	source[] = " vengo del pasado source";
	char	testdestino[50] = "Hola destino";
	char	testsource[] = " vengo de source";

	ft_strcat(destino, source);
	printf("Segun mi funcion; %s\n", destino);
	strcat(testdestino, testsource);
	printf("Segun la funcion: %s", testdestino);
}
*/
/*Primero calculamos la longitud del dest y luego copiamos cada caracter
 * de src en dest desde la posición de dest (detrás) y no sobreescribiendolo
 * y hasta que llegue el final de src
 *
 * el 41 es el limite length que quiero que tenga
 * mi string destino+source juntos*/
