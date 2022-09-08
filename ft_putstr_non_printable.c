/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cholee <cholee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 19:37:20 by cholee            #+#    #+#             */
/*   Updated: 2022/09/01 15:58:15 by cholee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print(char c)
{
	write(1, &c, 1);
}

int	ft_char_is_printable(char c)
{
	if (c >= 32)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{	
	int		x;

	x = 0;
	while (str[x] != '\0')
	{
		if (ft_char_is_printable(str[x]) == 1)
			print(str[x]);
		else
		{
			print('\\');
			print("0123456789abcdef" [str[x] / 16]);
			print("0123456789abcdef" [str[x] % 16]);
		}
		x++;
	}
}
/*
int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien");
	print('\n');
	ft_putstr_non_printable("Coucou tu vas bie\t\v\0n");
	print('\n');
	ft_putstr_non_printable("");
}*/
