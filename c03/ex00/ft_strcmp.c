/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:30:17 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/21 20:12:51 by joruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] && s2[i]) != '\0' && (s1[i] == s2[i]))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main(void)
{
	char	s1[] = "HolA";
	char	s2[] = "Hola";

	printf("Result: %d\n", ft_strcmp(s1, s2));
	if (ft_strcmp(s1, s2) > 0)
		printf("La cadena s1 es mayor que s2");
	else if (ft_strcmp(s1, s2) == 0)
		printf("La cadena s1 es igual s2");
	else
		printf("La cadena s1 es menor que s2");
	return (0);
}
*/
/* Creo un entero i al que le doy valor 0 para que recorra los strings
 * Creo un bucle while para comparar que los dos strings sean distinto de nulo
 * Y si son iguales.
 * Si se cumplen ambas, que vaya sumando y pasando...
 * En el return pongo que si no se cumple lo otro haga la resta
 *  del primer string menos el segundo
 * Comparo los dos para que en el momento en el que encuentre alguna
 * diferencia de caracteres 1 respecto a 2 me diga la diferencia (en el return)
 * entre los codigos ASCII
 * si es mayor que 1 la cadena 1 es mas grande que la cadena 2 y si es menor
 * lo contrario. Si es 0 es que son iguales*/
