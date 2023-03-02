/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:48:43 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/21 20:57:37 by joruiz-c         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	dlen;
	unsigned int	slen;

	a = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src[a] && a < size - dlen - 1)
	{
		dest[dlen + a] = src[a];
		a++;
	}
	dest[dlen + a] = '\0';
	return (dlen + slen);
}
/*
int	main(void)
{
	char	s1[50] = "Dame mas carne";
	char	s2[] = " y patatas pe";
	unsigned int	size = 50;
	unsigned int	result;

	result = ft_strlcat(s1, s2, size);
	printf("%s, %d", s1, result);
}
*/
/* Este ejercicio concatena segun el tamaño del destino, si el destino tiene
 * un tamaño de 40 (internamente va del 0-39) 
 * entonces iria del 0 al 39 menos 1 (size - dlen - 1)
 * y en el 39 es donde pone el '\0'
 * si la candena source y la dest no contienen nada devuelve 0
 * dlen es el tamaño del destino
 *
 * el tercer argumento (size) es el tamaño del destino
 *
 * - La primera funcion ft_strlen se especifica antes y como auxiliar
 *   porque luego la usamos para contar los caracteres tanto de source
 *   como de destino.
 * - En el ft_strlcat ya lo primero que hacemos es llamando la anterior
 *   especificamos dlen y slen para que los cuente.
 * - Si el tamaño es 0 o es menor o igual que el tamaño de destino dlen,
 *   le pedimos que devuelva el slen más su tamaño
 */
