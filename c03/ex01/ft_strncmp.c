/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:42:44 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/21 20:31:49 by joruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	tmp;

	tmp = 0;
	if (n == 0)
		return (0);
	while (s1[tmp] && (s1[tmp] == s2[tmp]) && (tmp < n -1))
		tmp++;
	return (s1[tmp] - s2[tmp]);
}
/*
int main(void)
{
	char s1[] = "ADioossS";
	char s2[] = "tes";
	printf("strcmp devuelve %d\n", strncmp(s1, s2, 9));
	printf("ft_strncmp devuelve %i\n", ft_strncmp(s1, s2, 9));
	return 0;
}
*/
/*
Igual que el anterior pero Compara solo n caracteres.
Cuando llega a n caracteres, para y deja de comparar
Creo un while para que compruebe si s1 y s2 existen E i sea menor que n
entre al if para que si s1 sea mayor o menor que s2, vea la diferencia
y sino, itere hasta que encuentre esas condiciones.
n es el hasta la posicion que yo quiero que me compruebe*/

/* tendria el int main(int argc, char const *argv[]) si fuera a darle
linea de argumentos. Pero por ello decido comprobar con void*/
