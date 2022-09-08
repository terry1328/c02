/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cholee <cholee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:56:45 by cholee            #+#    #+#             */
/*   Updated: 2022/08/30 20:56:57 by cholee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (!(str[x] >= 97 && str[x] <= 122))
		{
			return (0);
		}
		x++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("onlylowercase"));
	printf("%d\n", ft_str_is_lowercase("WithCapital"));
	printf("%d\n", ft_str_is_lowercase("withnumb35"));
	printf("%d\n", ft_str_is_lowercase("\0"));
}*/
