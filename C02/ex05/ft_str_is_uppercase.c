/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkaolim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:19:12 by pkaolim           #+#    #+#             */
/*   Updated: 2023/06/12 12:00:26 by pkaolim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	char test[] = "ABCDEFGH";
	char test2[] = "ABcDD";
	char test3[] = "Abc16@76s";
	printf("%d", ft_str_is_uppercase(test));
	printf("%d", ft_str_is_uppercase(test2));
	printf("%d", ft_str_is_uppercase(test3));
	return 0;
}
*/
