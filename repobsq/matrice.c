/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrice.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 15:01:06 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/26 16:08:58 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	*char_to_num(char *buffer, int lenght)
{
	int	*ptr;
	int	i;

	i = 0;
	ptr = malloc(sizeof(int) * lenght);
	if (!ptr)
		return (NULL);
	while (i < lenght)
	{
		if (buffer[i] == '.')
			ptr[i] = 0;
		else
			ptr[i] = 1;
		i++;
	}
	return (ptr);
}

int	**gen_matrice(char *buffer, int **matrice, int row, int column)
{
	int	i;
	int	t;
	int	m;

	i = 0;
	t = 0;
	m = 0;
	matrice = malloc(sizeof(int *) * (row + 1));
	if (!matrice)
		return (NULL);
	while (buffer[i])
	{
		if (buffer[i] == '\n')
		{
			matrice[m++] = char_to_num(&buffer[t], (i - t));
			t = i + 1;
		}
		i++;
	}
	matrice[m] = 0;
	return (matrice);
}
