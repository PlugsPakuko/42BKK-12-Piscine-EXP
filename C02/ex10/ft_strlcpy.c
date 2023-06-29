/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkaolim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:35:58 by pkaolim           #+#    #+#             */
/*   Updated: 2023/06/14 21:34:01 by pkaolim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

// int main(void)
// {
// 	char dest[14];
// 	char src[12] = "Helloasd123";
// 	printf("returned value: %u\n", ft_strlcpy(dest, src, 12));
// 	printf("dest: %s\n\n",dest);

// 	printf("returned value by ori: %lu\n", strlcpy(dest, src, 12));
// 	printf("dest: %s\n\n",dest);
// 	return 0;
// }
