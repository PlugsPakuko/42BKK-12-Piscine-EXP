/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkaolim <pkaolim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:19:52 by pkaolim           #+#    #+#             */
/*   Updated: 2023/06/24 11:53:11 by pkaolim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7' )
	{
		b = a + 1;
		while (b <= '8' )
		{
			c = b + 1;
			while (c <= '9' )
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a != '7' )
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}

int main()
{
	ft_print_comb();
	return (0);
}