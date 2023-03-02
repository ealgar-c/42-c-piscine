/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:00:28 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/19 13:03:38 by joruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

		i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
	char src[] = "aaaaa";
	char src2[] = "eeee";
	char dest[] = "bbbbbb";
	char dest2 [] = "ooo";

	printf ("%s", ft_strcpy(dest, src));
	printf ("\n%s", ft_strcpy(dest2, src2));
}*/