/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eouvrard <eouvrard@student.42lausanne.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 17:27:24 by eouvrard          #+#    #+#             */
/*   Updated: 2021/09/10 13:15:43 by eouvrard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_putchar(char c);

int	head(int x, int y)
{
	int	nbx;
	int	nby;

	nbx = 1;
	nby = 0;
	if (y > 0 && x > 0)
	{
		ft_putchar('A');
		while (nbx <= x - 2)
		{
			ft_putchar('B');
			nbx++;
		}
		if (x - 1)
		{
			ft_putchar('C');
		}
		ft_putchar('\n');
	}
	return (0);
}

int	body(int x, int y)
{
	int	nbx;
	int	nby;

	nby = 0;
	nbx = 1;
	if (y > 0 && x > 0)
	{
		while (nby < y - 2)
		{
			ft_putchar('B');
			while (nbx <= x - 2)
			{
				ft_putchar(' ');
				nbx++;
			}
			if (x - 1)
				ft_putchar('B');
			ft_putchar('\n');
			nbx = 1;
			nby++;
		}
	}
	return (0);
}

int	feet(int x, int y)
{
	int	nby;
	int	nbx;

	nby = 0;
	nbx = 1;
	if (y > 0 && x > 0)
	{
		if (y - 1)
		{
			ft_putchar('C');
			while (nbx <= x - 2 )
			{
				ft_putchar('B');
				nbx++;
			}
			if (x - 1)
			{
				ft_putchar('A');
			}
			ft_putchar('\n');
		}
	}
	return (0);
}

int	rush(int x, int y)
{
	head(x, y);
	body(x, y);
	feet(x, y);
	return (0);
}
