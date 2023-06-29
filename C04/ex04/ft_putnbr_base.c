/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkaolim <pkaolim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:46:52 by pkaolim           #+#    #+#             */
/*   Updated: 2023/06/19 22:09:24 by pkaolim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *base)
{
	int	len;

	len = 0;
	while (base[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	check_base(char *base)
{
	int	len;
	int	i;
	int	j;

	j = 0;
	i = 0;
	len = ft_strlen(base);
	if (len < 2)
		return (0);
	while (i < len)
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-'
			|| base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return (0);
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long int	len_base;
	long long int	nb;

	nb = (long long)nbr;
	len_base = ft_strlen(base);
	if (check_base(base))
	{
		if (nb == 0)
			ft_putchar(base[0]);
		else
		{
			if (nb < 0)
			{
				ft_putchar('-');
				nb *= -1;
			}
			if (nb < len_base)
				ft_putchar(base[nb]);
			if (nb >= len_base)
			{
				ft_putnbr_base(nb / len_base, base);
				ft_putnbr_base(nb % len_base, base);
			}
		}
	}
}
