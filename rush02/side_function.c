/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   side_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 22:49:28 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/24 23:32:07 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
char	**slice(char *str, char **tens_number)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	tens_number = malloc(sizeof(char *) * 5);
	tens_number[4] = 0;
	while (str[i])
	{
		j = check_condition(str, i, j, tens_number);
		i++;
	}
	while (j < 3)
	{
		tens_number[j++] = 0;
	}
	return (tens_number);
}

char	*create_tens(char c)
{
	char	*tens;

	tens = malloc(sizeof(char) * 3);
	if (!tens)
		return (NULL);
	tens[0] = c;
	tens[1] = '0';
	tens[2] = '\0';
	return (tens);
}

void	ft_print_number(char *number)
{
	int	i;

	i = 0;
	while (number[i])
	{
		write(1, &number[i], 1);
		i++;
	}
}

char	*create_zeros(int zeros, char *ptr)
{
	int	i;

	ptr = malloc((sizeof(char) * zeros * 3) + (2 * sizeof(char)));
	if (!ptr)
		return (NULL);
	ptr[0] = '1';
	i = 1;
	while (i < ((zeros * 3) + 1))
	{
		ptr[i] = '0';
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
