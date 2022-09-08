/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cholee <cholee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 21:06:24 by cholee            #+#    #+#             */
/*   Updated: 2022/08/30 21:06:26 by cholee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (!(str[x] >= 65 && str[x] <= 90))
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
	printf("%d\n", ft_str_is_uppercase("ISUPPERCASE"));
	printf("%d\n", ft_str_is_uppercase("WithLowercase"));
	printf("%d\n", ft_str_is_uppercase("withnumb35"));
	printf("%d\n", ft_str_is_uppercase("\0"));
}*/
