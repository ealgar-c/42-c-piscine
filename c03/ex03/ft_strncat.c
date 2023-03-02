/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 21:30:16 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/21 20:39:53 by joruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)

{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] && b < nb)
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	return (dest);
}
/*
int	main(void)

{
	unsigned int	n;
	char	destino[25] = "Esto es el futuro";
	char	source[] = " y esto el pasado";
	char	testdestino[25] = "Prueba de futuro";
	char	testsource[] = "prueba de pasado";

	n = 7;
	ft_strncat(destino, source, n);
	printf("Segun mi funcion: %s, y el source es: %s\n", destino, source);
	strncat(testdestino, testsource, n);
	printf("Segun la funcion: %s, y el source es: %s", testdestino, testsource);
}
*/
/*Este ejercicio trata de concatenar dos strings src y dest PERO limita la 
 * cantidad de caracteres a copiar con nb (HACE LO MISMO QUE N)
 * Los contadores a y b empiezan en 0 y los punteros *dest y *src
 * recorren cada uno de los strings
 * El primer while cuenta el numero de caracteres que tiene dest[a]
 * y los cuenta hasta que sea nulo
 * El segundo while empieza a copiar el src[b] DONDE
 * o CUANDO (&& b < nb) b pase de ser < que nb y sea =
 * --> Esto ultimo lo que le digo es que copie hasta que llegue a nb caracteres
 * o hasta el final de src[b] si le pongo uno más grande*/
