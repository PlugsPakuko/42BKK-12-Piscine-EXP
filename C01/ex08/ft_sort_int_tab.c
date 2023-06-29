/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkaolim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 09:06:00 by pkaolim           #+#    #+#             */
/*   Updated: 2023/06/11 10:55:52 by pkaolim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		arr_iter;
	int		min_iter;
	int		min_index;

	arr_iter = 0;
	min_iter = 0;
	while (arr_iter < size)
	{
		min_index = arr_iter;
		min_iter = arr_iter;
		while (min_iter < size)
		{
			if (tab[min_iter] < tab[min_index])
			{
				min_index = min_iter;
			}
			min_iter++;
		}
		ft_swap(&tab[arr_iter], &tab[min_index]);
		arr_iter++;
	}
}
