/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eouvrard <eouvrard@student.42lausanne.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 16:26:41 by eouvrard          #+#    #+#             */
/*   Updated: 2021/09/17 13:34:30 by eouvrard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_putchar(char c);

void	rush(int x, int y);

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		rush(x, y);
	}
	else
	{
		ft_putchar('E');
		ft_putchar('r');
		ft_putchar('r');
		ft_putchar('o');
		ft_putchar('r');
	}
	return (0);
}
