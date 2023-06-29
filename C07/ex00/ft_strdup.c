/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkaolim <pkaolim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:23:20 by pkaolim           #+#    #+#             */
/*   Updated: 2023/06/24 18:35:16 by pkaolim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *arr)
{
	int	len;

	len = 0;
	while (arr[len])
	{
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	i = ft_strlen(src);
	dup = (char *)malloc(sizeof(char) * (i + 1));
	if (!(dup))
		return ((void *)0);
	while (i >= 0)
	{
		dup[i] = src[i];
		i--;
	}
	dup[i] = '\0';
	return (dup);
}
