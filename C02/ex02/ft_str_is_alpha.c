/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkaolim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 15:04:56 by pkaolim           #+#    #+#             */
/*   Updated: 2023/06/11 15:25:24 by pkaolim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
		{		
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main(void){
	char test[] = "Hello123!@#";
	char test2[] = "PlainText";
	char test3[] = "!@#$&*(aka";
	ft_str_is_alpha(test);
	ft_str_is_alpha(test2);
	ft_str_is_alpha(test3);
	return 0;
}
*/