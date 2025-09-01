/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acatanho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 20:37:43 by acatanho          #+#    #+#             */
/*   Updated: 2025/08/24 23:34:35 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>

int		ft_strlen(char *str);
void	ft_print_number(char *number);
char	**slice(char *str, char **tens_number);
int		find_index_number(char *buffer, char *num, int lnum);
char	*find_letter_number(char *buffer, char *num, int lnum, char *nil);
int		ft_strlen(char *str);
int		ft_strlen2(char **str);
char	**split_hundred(char *str, int lnum);
int		valid_number( char *str);
char	*create_tens(char c);
void	ft_print_number(char *number);
char	*create_zeros(int zeros, char *ptr);
int		check_condition(char *str, int i, int j, char **tens_number);
int		check_dico(char *str);

#endif
