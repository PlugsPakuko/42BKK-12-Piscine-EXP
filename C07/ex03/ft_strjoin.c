/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkaolim <pkaolim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:43:55 by pkaolim           #+#    #+#             */
/*   Updated: 2023/06/26 14:21:13 by pkaolim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*concatenate_strings(int size, char **strs, char *sep, int length)
{
	int		i;
	int		j;
	int		z;
	char	*str;

	str = (char *)malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (j < size && size < length//)
	{
		z = 0;
		while (strs[j][z])
			str[i++] = strs[j][z++];
		if ((j + 1) < size)
		{
			z = 0;
			while (sep[z])
				str[i++] = sep[z++];
		}
		j++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	length;

	i = -1;
	length = 0;
	while (++i < size)
		length += ft_strlen(strs[i]);
	length += ((size - 1) * ft_strlen(sep));
	return (concatenate_strings(size, strs, sep, length));
}

/*
#include <stdio.h>
int	main(void)
{
	char	*test[4] = {"test1", "test2", "test3"};;
	char	sep[] = "-.-";

	printf("%s", ft_strjoin(3, test, sep));
}
*/
