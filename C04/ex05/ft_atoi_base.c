/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkaolim <pkaolim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 12:38:38 by pkaolim           #+#    #+#             */
/*   Updated: 2023/06/20 10:09:00 by pkaolim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_index(char *base, char digit)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == digit)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi(char *str, int base_len, char *base)
{
	int	sign;
	int	nbr;

	sign = 1;
	nbr = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= base[0] && *str <= base[base_len - 1])
	{
		if (get_index(base, *str) >= 0)
			nbr = (nbr * base_len) + get_index(base, *str);
		str++;
	}
	return (nbr * sign);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nb;
	int	len_base;

	len_base = ft_strlen(base);
	nb = ft_atoi(str, len_base, base);
	return (nb);
}
