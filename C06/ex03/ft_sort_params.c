/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkaolim <pkaolim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:55:55 by pkaolim           #+#    #+#             */
/*   Updated: 2023/06/22 15:14:43 by pkaolim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(int arr_iter, int min_index, char **argv)
{
	char	*tmp_a;

	tmp_a = argv[arr_iter];
	argv[arr_iter] = argv[min_index];
	argv[min_index] = tmp_a;
}

int	main(int argc, char **argv)
{
	int		arr_iter;
	int		min_iter;
	int		min_index;

	arr_iter = 1;
	min_iter = 1;
	while (arr_iter < argc)
	{
		min_index = arr_iter;
		min_iter = arr_iter;
		while (min_iter < argc)
		{
			if (ft_strcmp(argv[min_index], argv[min_iter]) > 0)
					min_index = min_iter;
			min_iter++;
		}
		if (argv[min_index] != argv[arr_iter])
			ft_swap(arr_iter, min_index, argv);
		arr_iter++;
	}
	arr_iter = 0;
	while (++arr_iter < argc)
		ft_putstr(argv[arr_iter]);
}
