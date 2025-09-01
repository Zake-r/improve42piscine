/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 20:55:10 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/26 22:45:41 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>

struct s_square
{
	int	row;
	int	col;
	int	size;
};

struct point
{
	int	x;
	int	y;
};

char	*assign_x(struct s_square sq, char *buffer);
char	*change_in_cross(char *buffer);
int		**gen_matrice(char *buffer, int **matrice, int row, int column);
struct	s_square find_square(int **matrice, int column, int row);
int		lenght_line(char *buffer);
int		check_map(char *buffer, char *info);

#endif
