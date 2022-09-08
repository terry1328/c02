/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cholee <cholee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 14:49:31 by cholee            #+#    #+#             */
/*   Updated: 2022/08/31 16:39:31 by cholee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
		{
			str[x] += 32;
		}
		x++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	x;

	x = 0;
	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
	while (str[x] != '\0')
	{
		if (str[x] >= '0' && str[x] <= '9')
		{
			x++;
			continue ;
		}
		else if (!(str[x] >= 'A' && str[x] <= 'Z'))
		{
			if (!(str[x] >= 'a' && str[x] <= 'z'))
			{
				if (str[x + 1] >= 'a' && str[x + 1] <= 'z')
					str[x + 1] -= 32;
			}
		}
		x++;
	}
	return (str);
}
/*
int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%s\n", ft_strcapitalize(av[1]));
}*/
