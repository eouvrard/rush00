/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eouvrard <eouvrard@student.42lausanne.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 17:27:24 by eouvrard          #+#    #+#             */
/*   Updated: 2021/09/13 14:34:05 by eouvrard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_putchar(char c);

void	head(int x, int y)
{
	int	nbx;
	int	nby;

	nbx = 1;
	nby = 0;
	if (y > 0 && x > 0)
	{
		ft_putchar('/');
		while (nbx <= x - 2)
		{
			ft_putchar('*');
			nbx++;
		}
		if (x - 1)
			ft_putchar('\\');
		ft_putchar('\n');
	}
}

void	body(int x, int y)
{
	int	nbx;
	int	nby;

	nby = 0;
	nbx = 1;
	if (y > 0 && x > 0)
	{
		while (nby < y - 2)
		{
			ft_putchar('*');
			while (nbx <= x - 2)
			{
				ft_putchar(' ');
				nbx++;
			}
			if (x - 1)
				ft_putchar('*');
			ft_putchar('\n');
			nbx = 1;
			nby++;
		}
	}
}

void	feet(int x, int y)
{
	int	nby;
	int	nbx;

	nby = 0;
	nbx = 1;
	if (y > 0 && x > 0)
	{
		if (y - 1)
		{
			ft_putchar('\\');
			while (nbx <= x - 2 )
			{
				ft_putchar('*');
				nbx++;
			}
			if (x - 1)
			{
				ft_putchar('/');
			}
			ft_putchar('\n');
		}
	}
}

void	rush(int x, int y)
{
	head(x, y);
	body(x, y);
	feet(x, y);
}
