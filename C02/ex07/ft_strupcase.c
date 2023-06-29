/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkaolim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 20:20:18 by pkaolim           #+#    #+#             */
/*   Updated: 2023/06/13 11:38:23 by pkaolim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*
int main(void)
{
	char test[] = "avengers 2023";
	char test2[] = "AJ123!@#";
	printf("%s", ft_strupcase(test));
	printf("%s", ft_strupcase(test2));
	return 0;
}
*/
