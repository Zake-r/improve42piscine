/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 13:41:22 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/16 18:30:04 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdbool.h>
#include<stdio.h>

bool check_col(int i, int j, int grid[10][10])
{
	int a = i;
	while (a > 0)
	{
		a--;
		if (grid[a][j] == 1)
			return false;
	}
	while (i < 10)
	{
		if (grid[i][j] == 1)
			return false;
		i++;
	}
	return true;

}

bool check_diago(int i, int j, int grid[10][10])
{
	//improve code :
	int direction[2][2] = {{-1, -1}, {-1, 1}};
	int a;
	int b;

	for (int d = 0; d<2; d++)
	{
		a = i;
		b = j;
		while(a >= 0 && a < 10 && b >= 0 && b < 10)
		{
			if (grid[a][b] == 1)
				return false;
			a += direction[d][0];
			b += direction[d][1];
		}
	}
	return true;
}
bool is_safe(int i, int j, int grid[10][10])
{
	if (!check_col(i, j, grid) || !check_diago(i, j, grid))
		return false;
	return true;
}

int place(int grid[10][10], int position_line)
{
	int l = 0;
	int j = -1;
	
	int nb = 0;
	
	if (position_line == 10)
	{
		for (int v = 0; v < 10; v++)
		{
			for (int w = 0; w < 10; w++)	
			{
				if(grid[v][w] == 1)
				{
					printf("%d",w);
				}
			}
		}
		printf("\n");
		return 1;
	}
	while (l < 10)
	{
		if (is_safe(position_line,l,grid))
		{
			grid[position_line][l] = 1;
			nb += place(grid,position_line + 1);
			grid[position_line][l] = 0;
		}
		l++;

	}
	return nb;
}


int main(void)
{
	int grid[10][10] = {
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
	};
	int nb = 0;
	int len = 10;
	nb = place(grid,0);
	
	printf("%d",nb);

}