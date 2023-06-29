/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkaolim <pkaolim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 01:01:03 by pkaolim           #+#    #+#             */
/*   Updated: 2023/06/29 14:18:41 by pkaolim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	is_sep(char to_find, char *sep)
{
	while (*sep)
	{
		if (to_find == *sep)
			return (1);
		sep++;
	}
	return (0);
}

int	ft_wordcount(char *str, char *sep)
{
	int	check;
	int	word;

	word = 0;
	check = 1;
	while (*str)
	{
		if (is_sep(*str, sep))
		{
			while (is_sep(*str, sep))
				str++;
			check = 1;
		}
		while (!(is_sep(*str, sep)) && *str)
		{
			if (check == 1)
			{
				word += 1;
				check = 0;
			}
			str++;
		}
	}
	return (word);
}

int	ft_strlen(char *str, char *sep)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (is_sep(*str, sep))
			return (count);
		count++;
		str++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		j;
	int		word;
	int		i;
	char	**arr;

	i = 0;
	word = ft_wordcount(str, charset);
	arr = (char **)malloc(sizeof(char *) * (word + 1));
	if (!(arr))
		return ((void *)0);
	while (i < word && *str)
	{
		while (is_sep(*str, charset) && *str)
			str++;
		j = 0;
		arr[i] = (char *)malloc(sizeof(char) * (ft_strlen(str, charset) + 1));
		if (!(arr[i]))
			return ((void *)0);
		while (!(is_sep(*str, charset)) && *str)
			arr[i][j++] = *str++;
		arr[i][j] = '\0';
		i++;
	}
	arr[word] = 0;
	return (arr);
}

/*
int	main(void)
{
	char test[] = " Hello World+123      ";
	char sep[] = " +-";
	char **arr = ft_split(test, sep);
	printf("%d\n", ft_wordcount(test, sep));
	for (int i = 0; i <= ft_wordcount(test, sep); i++)
	{
		printf("%s\n", arr[i]);
	}
}
*/