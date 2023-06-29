/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkaolim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:10:03 by pkaolim           #+#    #+#             */
/*   Updated: 2023/06/11 17:23:22 by pkaolim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	char test[] = "abcdefgh";
	char test2[] = "ABcDD";
	char test3[] = "Abc16@76s";
	ft_str_is_lowercase(test);
	ft_str_is_lowercase(test2);
	ft_str_is_lowercase(test3);
	return 0;
}
*/
