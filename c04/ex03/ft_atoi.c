/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 21:40:44 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/21 21:44:41 by joruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	num;
	int	i;
	int	sign;

	num = 0;
	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - 48);
		i++;
	}
	return (sign * num);
}
/*
int	main(int argc, char *argv[])
{
	int	a;

	if (argc == 2)
	{
		a = ft_atoi(argv[1]);
		printf("%d\n", a);
	}
	else
		printf("Introduzca solo un parametro");
	return (0);
}
*/
/* Primero te quita los espacios y saltos de linea del principio de la cadena.
luego itera sobre los simbolos + y -
y si es - multiplica el signo por -1 (convirtiendolo en positivo)
luego iteras sobre las cadenas de jnumeros de entre el 0 y el 9
que con eso lo que hace es coger, p. ej:
n  123
num vale 1
y ahora va por la iteracion del 2 (del 123) entonces num vale 1, multiplica
por 10 + el 2 en ascii que es 50, por tanto 50-48 es 2,
y 2 + 10 = 12 (ya tienes los dos primeros numeros del 123)
ahora en el ciclo que vaya a por el 3 del 123 el num valdrá 12... */
