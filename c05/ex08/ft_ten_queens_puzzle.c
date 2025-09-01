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

#include <stdio.h>

int is_safe(board, row, j)
{
	while( row != 0)
	{
		if (board[row][j] == 1)
		{
			return 0;
		}
		row--;
	}
}




int rev(row,board)
{
	int	j;
	int possibility;

	possibility = 0;
	j = 0;
	if (row == 10)
		return 1;
	else
	{
		while(j < 10)
		{
			if (is_safe(board, row, j) == 1)
			{
				board[row][i] = 1;
				possibility += rev(row + 1,board);
				board[row][i] = 0;

			}
		}	
		return possibility;
	}
}

int ft_ten_queens_puzzle(void)
{
	int board[10][10] = { 
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0} };
	int row = 0;	
	int number;
	
	number = rev(row,board)
	return number;
}


int main(void)
{
	printf("%d",ft_ten_queens_puzzle());
	return 0;
}
