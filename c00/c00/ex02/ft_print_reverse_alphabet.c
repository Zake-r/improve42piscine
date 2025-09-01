/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.frckear      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 12:58:29 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/07 17:39:27 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter + 1 != 'a')
	{
		write(1, &letter, 1);
		letter--;
	}	
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
}
*/
