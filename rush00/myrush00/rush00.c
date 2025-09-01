/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 12:42:09 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/09 16:36:17 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	lineX(int x)
{	
	ft_putchar('o');

	for (int i = 1; i < x - 1; i++)
	{
		ft_putchar('-');
	}
	ft_putchar('o');
	ft_putchar('\n');
}

void	lineY(int y)
{
	ft_putchar('o');
	ft_putchar('\n');
	for(int k = 1; k < y - 1; k++)
	{
		ft_putchar('|');
		ft_putchar('\n');
	}
	ft_putchar('o');
	ft_putchar('\n');
}

void	lineXY(int x, int y)
{
	lineX(x);
	for (int j = 1; j < y - 1; j++)
	{	
		ft_putchar('|');
		for(int k = 1; k < x - 1; k++)
		{
			ft_putchar(' ');
		}
		ft_putchar('|');
		ft_putchar('\n');
	}
	lineX(x);

}

void	rush(int x, int y)
{
	if (x == 1 && y == 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
	}	
	else 
	{
		if (y == 1)
		{
			lineX(x);
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
