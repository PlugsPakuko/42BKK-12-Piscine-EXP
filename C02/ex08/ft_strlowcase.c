/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkaolim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 20:20:18 by pkaolim           #+#    #+#             */
/*   Updated: 2023/06/12 12:02:08 by pkaolim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char test[] = "AVENGERS 2023";
	char test2[] = "aj123!@#";
	printf("%s", ft_strlowcase(test));
	printf("%s", ft_strlowcase(test2));
	return 0;
}
*/