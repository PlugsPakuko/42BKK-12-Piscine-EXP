/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkaolim <pkaolim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:34:25 by pkaolim           #+#    #+#             */
/*   Updated: 2023/06/24 18:35:08 by pkaolim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	*range = (int *)malloc(sizeof(int) * len);
	if (!(*range))
	{
		*range = NULL;
		return (-1);
	}
	while (min < max)
	{
		*(*range + i) = min;
		min++;
		i++;
	}
	return (len);
}

/*
#include <stdio.h>
int main()
{
    int *ptr;
    int *arr;
    ptr = arr;
    printf("%d\n", ft_ultimate_range(&ptr,6,17));
    printf("%d", ptr[11]);
}
*/