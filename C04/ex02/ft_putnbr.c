/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkaolim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 00:02:05 by pkaolim           #+#    #+#             */
/*   Updated: 2023/06/20 10:08:31 by pkaolim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	nbr;

	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
		{
			ft_putnbr(214748364);
			write(1, "8", 1);
			return ;
		}
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		nbr = nb + 48;
		write(1, &nbr, 1);
	}
}
/*
int main()
{
	ft_putnbr(-2147483648);
}
*/
