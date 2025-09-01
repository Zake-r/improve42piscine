/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 16:46:07 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/10 10:21:31 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	ft_firstline(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('/');
		if (i != 1 && i == x)
			ft_putchar('\\');
		if (i != 1 && i < x)
			ft_putchar('*');
		i++;
	}
	ft_putchar('\n');
}

void	ft_middleline(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('*');
		if (i != 1 && i == x)
			ft_putchar('*');
		if (i != 1 && i < x)
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void	ft_lastline(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('\\');
		if (i != 1 && i == x)
			ft_putchar('/');
		if (i != 1 && i < x)
			ft_putchar('*');
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x < 0 || y < 0)
		write(1, "A rectangle cannot have a negative side length.\n", 48);
	i = 1;
	while (i <= y && x > 0)
	{
		if (i == 1)
			ft_firstline(x);
		if (i != 1 && i == y)
			ft_lastline(x);
		if (i != 1 && i < y)
			ft_middleline(x);
		i++;
	}
}
