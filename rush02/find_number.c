/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 12:13:55 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/24 20:45:36 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	valid_number( char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	check_not_in_caracter(char *buffer, int j)
{
	if (buffer[j - 1] == '\n')
		return (1);
	return (0);
}

int	find_index_number(char *buffer, char *num, int lnum)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	j = 0;
	c = 0;
	while (num[i])
	{
		while (buffer[j])
		{
			if (buffer[j] == num[i] && check_not_in_caracter(buffer, j))
			{
				while (buffer[j + c] == num[i + c])
					c++;
				if (lnum == c && (buffer[j + c] == ' ' || buffer[j + c] == ':'))
					return (j);
			}	
			j++;
			c = 0;
		}
		i++;
		j = 0;
	}
	return (-1);
}

char	*find_letter_number(char *buffer, char *num, int lnum, char *nil)
{
	int		index_letter;
	int		index_number;
	int		j;

	index_number = find_index_number(buffer, num, lnum);
	j = 0;
	while (buffer[index_number + lnum - 1 + j] != ':')
		j++;
	while (buffer[index_number + lnum + j] == ' ')
		j++;
	index_letter = index_number + lnum + j - 1;
	j = 0;
	while (buffer[index_letter + j] != '\n')
		j++;
	nil = malloc((sizeof(char) * j) + 1);
	if (!nil)
		return (NULL);
	j = 0;
	while (buffer[index_letter + j] != '\n')
	{
		nil[j] = buffer[index_letter + j];
		j++;
	}
	nil[j] = '\0';
	return (nil);
}
