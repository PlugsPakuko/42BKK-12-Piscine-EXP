/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkaolim <pkaolim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:58:53 by pkaolim           #+#    #+#             */
/*   Updated: 2023/06/21 17:02:07 by pkaolim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	origin;

	origin = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb *= origin;
		power--;
	}
	return (nb);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_power(0,0));
}
*/