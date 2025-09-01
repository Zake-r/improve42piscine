/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 08:54:45 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/26 22:18:48 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*take_info(char *buffer, char *info)
{
	int	i;

	i = 0;
	while (buffer[i] != '\n')
		i++;
	info = malloc((i + 1) * sizeof(char));
	if (!info)
		return (NULL);
	i = 0;
	while (buffer[i] != '\n')
	{
		info[i] = buffer[i];
		i++;
	}
	info[i] = '\0';
	return (info);
}

int	size_file(char *argv)
{
	char	buffer[100];
	int		n;
	int		size;
	int		fd;

	fd = open(argv, O_RDONLY);
	size = 0;
	while ((n = read(fd, buffer, sizeof(buffer))) > 0)
	{
		size += n;
	}
	close(fd);
	return (size);
}

int	lenght_line(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i] != '\n')
		i++;
	return (i);
}

int	find_start_index(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i] != '\n')
		i++;
	return (i);
}

char	*open_file(char *buffer, char *argv)
{
	int	fd;
	int	size;

	size = size_file(argv);
	buffer = malloc((sizeof(char) * size) + 1);
	if (!buffer)
		return (NULL);
	fd = open(argv, O_RDONLY);
	if (fd == -1)
		return (NULL);
	read(fd, buffer, size);
	buffer[size] = '\0';
	close(fd);
	return (buffer);
}

void	display_matrice(int **matrice, char *buffer)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (matrice[i])
	{
		while (j < lenght_line(buffer))
		{
			printf("%d ", matrice[i][j]);
			j++;
		}
		printf("\n");
		i++;
		j = 0;
	}
}

void	display_map(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i])
	{
		write(1, &buffer[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	*buffer;
	char	*info;
	int		**matrice;
	int		start_index;
	struct	s_square sol;
	int		i;
	int		j;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			buffer = open_file(buffer, argv[i]);
			start_index = find_start_index(buffer) + 1;
			info = take_info(buffer, info);
			if (check_map(&buffer[start_index], info) == 0)
                        {
                                write(1, "error map\n", 10);
                                free(buffer);
                                free(info);
                                i++;
                                continue ;

                        }
			matrice = gen_matrice(&buffer[start_index], matrice,atoi(&info[0]), lenght_line(&buffer[start_index]));
			sol = find_square(matrice, lenght_line(&buffer[start_index]), atoi(&info[0]));
			assign_x(sol, &buffer[start_index]);
			display_map(buffer);
			j = 0;
			while (matrice[j])
			{
				free(matrice[j]);
				j++;
			}
			free(matrice[j]);
			free(matrice);
			free(buffer);
			free(info);
			i++;
		}
	}
	else
		return (0);
}
