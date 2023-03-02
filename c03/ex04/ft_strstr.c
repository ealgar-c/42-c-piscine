/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 21:58:58 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/21 20:45:41 by joruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	a = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[a] != '\0')
	{
		b = 0;
		while (str[a + b] == to_find[b] && str[a + b] != '\0')
		{
			if (to_find[b + 1] == '\0')
				return (&str[a]);
				b++;
		}
		a++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[] = "Dame mas kebab";
	char	s2[] = " m";
	char	*str;
	char	*teststr;

	str = ft_strstr(s1, s2);
	teststr = strstr(s1, s2);
	printf("Segun mi funcion: %s ,%s ,%s \n", s1, s2, str);
	printf("Segun la funcion: %s ,%s ,%s ", s1, s2, teststr);
}
*/
/*Te da una cadena que quiere encontrar to find y la quiere encontrar
en la cadena str y lo que hace es ir comprobando la primera cadena 
con la segunda caracter a caracter y cuando ve la coincidencia donde
primero ve la coincidencia es lo que te va a retornar, si buscas por 
ejemplo: 'bar'en la cadena 'fo bar fo' te va a devolver 'bar fo'
porque a la primera coincidencia ya luego te devuelve todo lo demás*/
