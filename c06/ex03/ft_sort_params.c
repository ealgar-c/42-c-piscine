/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:27:03 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/22 21:29:55 by joruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
				str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
			return (s1[i] - s2[i]);
		else
					i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		i;
	char	*tmp;

	i = 0;
	while (++i < argc -1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
					tmp = argv[i];
					argv[i] = argv[i + 1];
					argv[i + 1] = tmp;
					i = 0;
		}
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i++]);
		ft_putstr("\n");
	}
	return (0);
}
