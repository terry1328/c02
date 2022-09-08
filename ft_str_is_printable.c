/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cholee <cholee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 21:07:40 by cholee            #+#    #+#             */
/*   Updated: 2022/08/30 21:38:24 by cholee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (!(str[x] >= 32 && str[x] <= 127))
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
	printf("%d\n", ft_str_is_printable("ijsdkgnagnak"));
	printf("%d\n", ft_str_is_printable("3526636363"));
	printf("%d\n", ft_str_is_printable("\t"));
	printf("%d\n", ft_str_is_printable("\0"));
}*/
