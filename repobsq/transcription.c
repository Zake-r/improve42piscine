/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transcription.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhadra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 17:02:03 by mokhadra          #+#    #+#             */
/*   Updated: 2025/08/26 22:21:52 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	transfert(int y, int x, char *buffer)
{
	int	len;

	len = 0;
	len = y * (lenght_line(buffer) + 1) + x;
	return (len);
}

char	*assign_x(struct s_square sq, char *buffer)
{
	int	i;
	int	j;
	int	size;

	size = sq.size;
	i = 0;
	while (i < sq.size)
	{
		j = 0;
		while (j < sq.size)
		{
			if (buffer[transfert(sq.col + i, sq.row + j, buffer)] == '.')
				buffer[transfert(sq.col + i, sq.row + j, buffer)] = 'X';
			j++;
		}
	i++;
	}
	return (buffer);
}
