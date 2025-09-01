/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 20:54:29 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/21 21:10:58 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H
	
#include <unistd.h>

#define TRUE 1
#define FALSE 0
#define SUCCESS 0
#define EVEN_MSG "I have an even number of arguments."
#define ODD_MSG "I have an odd number of arguments."
#define EVEN(n) (((n) % 2 == 0) ? TRUE : FALSE)

typedef int t_bool;

void	ft_putstr(char *str);
t_bool 	ft_is_even(int nbr);


#endif
