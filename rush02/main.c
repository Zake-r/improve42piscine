/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 17:45:04 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/24 23:40:49 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strndup(char *src, int n);

int	check_condition(char *str, int i, int j, char **tens_number)
{
	int	lstr;

	lstr = ft_strlen(str);
	if (str[i] != '0' && i == 0 && (lstr == 3))
	{
		tens_number[j++] = ft_strndup(&str[i], 1);
		tens_number[j++] = ft_strndup("100", 3);
	}
	if (str[i] != '0' && ((i == 1 && (lstr == 3)) || (lstr == 2 && i == 0)))
	{
		if ((str[i] == '1') && (str[i + 1] != '0'))
			tens_number[j++] = ft_strndup(&str[i], 2);
		else
			tens_number[j++] = create_tens(str[i]);
	}
	if ((str[i] != '0' ) && ((i == 2 && (str[i - 1] != '1'))
			|| (lstr == 2 && i == 1 && (str[i - 1] != '1'))
			|| (lstr == 1 && i == 0)))
		tens_number[j++] = ft_strndup(&str[i], 1);
	return (j);
}

int	print_tens(char **tens_number, char *buffer, int s)
{
	int		j;
	char	*nil;

	j = 0;
	while (tens_number[j] != 0)
	{
		nil = find_letter_number(buffer,
				tens_number[j], ft_strlen(tens_number[j]), nil);
		ft_print_number(nil);
		free(tens_number[j]);
		free(nil);
		s = 1;
		j++;
	}
	return (s);
}

void	check_display_zeros(char **result, char *buffer, int s, int i)
{
	char	*zeros;
	char	*nil;

	zeros = NULL;
	nil = NULL;

	if (!(result[i + 1] == 0) && (s == 1))
	{
		zeros = create_zeros((ft_strlen2(result) - 1 - i), zeros);
		nil = find_letter_number(buffer, zeros, ft_strlen(zeros), nil);
		ft_print_number(nil);
		free(zeros);
		free(nil);
	}
}

void	display_number(char **result, char *buffer)
{
	int		i;
	int		s;
	char	**tens_number;

	s = 0;
	i = 0;
	while (result[i] != 0)
	{
		tens_number = slice(result[i], tens_number);
		s = print_tens(tens_number, buffer, s);
		check_display_zeros(result, buffer, s, i);
		s = 0;
		free(result[i]);
		i++;
	}
	free(tens_number);
}

int	main(int argc, char *argv[])
{
	char	**result;
	char	buffer[691];
	int		fd;

	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
		return (0);
	read(fd, buffer, sizeof(buffer));

	close(fd);
	if (valid_number(argv[1]) == 0)
	{
		write(1,"Erreur Number",13);
		return (0);
	}
	if (argc == 2)
	{
		result = split_hundred(argv[1], ft_strlen(argv[1]));
		display_number(result, buffer);
		free(result);
	}
	else
		write(1, "Invalid number of arguments", 27);
}
