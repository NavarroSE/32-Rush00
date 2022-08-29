/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 21:16:17 by manavarr          #+#    #+#             */
/*   Updated: 2022/03/20 15:25:56 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(int c);
void	rush(int x, int y);

int	main(void)
{
	rush(5, 5);
	ft_putchar('\n');
	rush(6, 2);
	ft_putchar('\n');
	rush(2, 8);
	ft_putchar('\n');
	return (0);
}
