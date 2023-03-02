/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_with_non_printable.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:02:30 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/20 12:27:14 by joruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	get_base(int nbr, char *base)
{
	int	size;

	size = 0;
	while (base[size])
		size++;
	if (nbr >= size)
		get_base(nbr / size, base);
	ft_putchar(base[nbr % size]);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if ((str[i] <= 31 && str[i] >= 0) || str[i] == 127)
		{
			ft_putchar('\\');
			if (str[i] < 16)
				ft_putchar('0');
			get_base(str[i], "0123456789abcdef");
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
/*
int main(int argc, char const *argv[])
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	return 0;
}*/
/*get base convierte un numero en una cadena de caracteres segun la base 16 
(hexadecimal)*/
