/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:17:19 by manavarr          #+#    #+#             */
/*   Updated: 2022/03/20 17:15:56 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c);

void	ft_firstline(int verticals)
{
	int	vertical;

	vertical = 1;
	while (vertical <= verticals)
	{
		if (vertical == 1)
			ft_putchar('A');
		else if (vertical == verticals)
			ft_putchar('C');
		else
			ft_putchar('B');
		vertical++;
	}
}

void	ft_midline(int verticals)
{
	int	vertical;

	vertical = 1;
	while (vertical <= verticals)
	{
		if (vertical == 1 || vertical == verticals)
			ft_putchar('B');
		else
			ft_putchar(' ');
		vertical++;
	}
}

void	ft_lastline(int verticals)
{
	int	vertical;

	vertical = 1;
	while (vertical <= verticals)
	{
		if (vertical == 1)
			ft_putchar('C');
		else if (vertical == verticals)
			ft_putchar('A');
		else
			ft_putchar('B');
		vertical++;
	}
}

void	rush(int x, int y)
{
	int	horizontal;

	horizontal = 1;
	while (horizontal <= y)
	{
		if (horizontal == 1)
			ft_firstline(x);
		else if (horizontal == y)
			ft_lastline(x);
		else
			ft_midline(x);
		ft_putchar('\n');
		horizontal++;
	}
}
