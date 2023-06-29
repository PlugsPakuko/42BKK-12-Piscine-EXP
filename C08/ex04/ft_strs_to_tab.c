/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkaolim <pkaolim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 15:52:08 by pkaolim           #+#    #+#             */
/*   Updated: 2023/06/27 20:00:28 by pkaolim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			j;
	t_stock_str	*ptr;

	ptr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!(ptr))
		return ((void *)0);
	i = 0;
	while (i < ac)
	{
		j = 0;
		ptr[i].size = ft_strlen(av[i]);
		ptr[i].str = av[i];
		ptr[i].copy = (char *)malloc(sizeof(char) * (ft_strlen(av[i]) + 1));
		while (av[i][j])
		{
			ptr[i].copy[j] = av[i][j];
			j++;
		}
		ptr[i].copy[j] = '\0';
		i++;
	}
	ptr[i].str = 0;
	return (ptr);
}

[struct s_stock_str1,  s_stock_str2,  s_stock_str3,  s_stock_str4, stock 5]
