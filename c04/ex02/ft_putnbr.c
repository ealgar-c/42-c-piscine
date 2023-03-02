/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 21:37:13 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/21 21:39:52 by joruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *c, int b)
{
	write(1, c, b);
}

void	ft_putnbr(int nb)
{
	char	aux;

	if (nb == -2147483648)
		ft_putchar("-2147483648", 11);
	else if (nb >= 0 && nb <= 9)
	{
		aux = nb + '0';
		ft_putchar(&aux, 1);
	}
	else if (nb < 0)
	{
		ft_putchar("-", 1);
		nb *= -1;
		ft_putnbr(nb);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	ft_putchar("\n", 1);
	ft_putnbr(101);
	ft_putchar("\n", 1);
	ft_putnbr(-25);
	ft_putchar("\n", 1);
	ft_putnbr(100);
	return (0);
}*/

/*  Pasa el numero que le pases de parametros a caracteres pero 
contemplando solo el minimo de los enteros y el max*/