/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 09:25:17 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/15 10:33:00 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rec(int nb)
{
	if (nb >= 10)
	{
		ft_rec(nb / 10);
	}
	ft_putchar((nb % 10) + '0');
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
	}
	if (nb < 10)
		ft_putchar(nb + '0');
	else
		ft_rec(nb);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{	
	
	if (argc > 2)	
		write(2,"Error",5);
	else
		ft_putnbr(atoi(argv[1]));	
	
	//ft_putnbr(-2147483648);
	//ft_putchar('\n');
	//ft_putnbr(2147483647);
}
*/
