/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkaolim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 15:37:20 by pkaolim           #+#    #+#             */
/*   Updated: 2023/06/11 17:04:12 by pkaolim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main(void)
{
	char test[] = "Hello123!@#";
	char test2[] = "PlainText";
	char test3[] = "!@#$&*(aka";
	ft_str_is_numeric(test);
	ft_str_is_numeric(test2);
	ft_str_is_numeric(test3);
	return 0;
}
*/