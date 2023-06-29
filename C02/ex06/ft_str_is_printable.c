/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkaolim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:23:48 by pkaolim           #+#    #+#             */
/*   Updated: 2023/06/15 01:18:19 by pkaolim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 32) && (str[i] <= 126)))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	char test[] = "daw\n";
	char test2[] = "ABcDD";
	printf("%d", ft_str_is_printable(test));
	printf("%d", ft_str_is_printable(test2));
	return 0;
}
*/
