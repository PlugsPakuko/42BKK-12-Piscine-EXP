/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkaolim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:36:57 by pkaolim           #+#    #+#             */
/*   Updated: 2023/06/12 09:17:46 by pkaolim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		center;
	int		i;
	int		temp;

	i = 0;
	center = (size / 2);
	if (size % 2 != 0)
		center++;
	while (i < center)
	{
		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp;
		size--;
		i++;
	}
}
int main()
{
	int test[5] = {1,2,3,4,5};
	ft_rev_int_tab(test, 5)
}
