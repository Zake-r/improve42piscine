/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 20:46:46 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/07 21:34:34 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print_number(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 48;
	b = 49;
	c = 50;
	while (a < 55)
	{
		b = a + 1;
		while (b <= 56 && a < b)
		{
			c = b + 1;
			while (c <= 57 && b < c)
			{
				print_number(a, b, c);
				write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
	print_number(a, b - 1, c - 1);
}
/*
int	main(void)
{
	ft_print_comb();
}
*/
