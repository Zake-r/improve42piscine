/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 16:25:57 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/26 23:04:44 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

struct	s_square replace_s(struct s_square t, int x, int y, int size)
{
	t.row = x;
	t.col = y;
	t.size = size;
	return (t);
}

int	check_upgrade(int size, int x, int y, int **matrice)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size)
		{
			if (matrice[y + i][x + j] == 1)
				return (0);
			j++;
		}
		i++;
		j = 0;
	}
	return (1);
}

int	check_square(int size, int x, int y, int **matrice)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size)
		{
			if (matrice[y + i][x + j] == 1)
				return (0);
			j++;
		}
		i++;
		j = 0;
	}
	return (1);
}

struct s_square find_square(int **matrice, int row, int col)
{
	int	x;
	int	y;
	int	change;
	int	upgrade;
	struct s_square s = {-1,-1, 1};

	x = 0;
	y = 0;
	change = 0;
	while (y < (col - (s.size - 1)))
	{
		while (x < (row - (s.size - 1)))
		{
			upgrade = 1;
			if (check_square(s.size, x, y, matrice) == 1)
			{
				if (change == 0)
				{
					s = replace_s(s, x, y, s.size);
					change = 1;
				}
				while (upgrade == 1)
				{
					upgrade = 0;
					if ((x < (row - (s.size))) && (y < (col - (s.size))))
					{
						if ((upgrade = check_upgrade(s.size + 1, x, y, matrice)) == 1)
							s = replace_s(s, x, y, s.size + 1);
					}
				}
			}
		x++;
		}
		y++;
		x = 0;
	}
	return (s);
}
