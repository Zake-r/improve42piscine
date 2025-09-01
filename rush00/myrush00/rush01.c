/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 13:24:02 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/09 14:07:03 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdbool.h>

void	ft_putchar(char c);

void	lineX(int x, bool top)
{
	char a;
	char b;
	if (top == true)
	{
		a = '/';
		b = '\\';
	}	
	else 
	{
		a = '\\';
		b = '/';
	}
	ft_putchar(a);
	for (int i = 1; i < x - 1; i++)
	{
		ft_putchar('*');
	}
	ft_putchar(b);
	ft_putchar('\n');
}

void	lineY(int y)
{
	ft_putchar('/');
	ft_putchar('\n');
	for(int k = 1; k < y - 1; k++)
	{
		ft_putchar('*');
		ft_putchar('\n');
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	lineXY(int x, int y)
{
	lineX(x,true);
	for (int j = 1; j < y - 1; j++)
	{	
		ft_putchar('*');
		for(int k = 1; k < x - 1; k++)
		{
			ft_putchar(' ');
		}
		ft_putchar('*');
		ft_putchar('\n');
	}
	lineX(x,false);

}

void	rush(int x, int y)
{
	if (x == 1 && y == 1)
	{
		ft_putchar('/');
		ft_putchar('\n');
	}	
	else 
	{
		if (y == 1)
		{
			lineX(x,true);
		}
		else if (x == 1)
		{
			lineY(y);
		}	
		else 
		{
			lineXY(x,y);
		}
	}
}
