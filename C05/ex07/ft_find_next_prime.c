/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkaolim <pkaolim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 20:52:39 by pkaolim           #+#    #+#             */
/*   Updated: 2023/06/22 10:09:33 by pkaolim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 5;
	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	check;

	check = 0;
	if (nb < 3)
		return (2);
	while (check != 1)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (nint ma);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d",ft_find_next_prime(__INT_MAX__));
// }
