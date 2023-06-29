/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pphingkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 21:50:44 by pphingkh          #+#    #+#             */
/*   Updated: 2023/06/11 21:55:04 by pphingkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i <= y && y > 0 && x > 0)
	{
		while (j <= x)
		{
			if ((i == 1 && j == 1) || (i == y && j == x && x != 1 && y != 1))
				ft_putchar('o');
			else if ((i == 1 && j == x) || (i == y && j == 1))
				ft_putchar('o');
			else if (i == 1 || i == y)
				ft_putchar('-');
			else if (j == 1 || j == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			j++;
		}
		write(1, "\n", 1);
		j = 1;
		i++;
	}
}
