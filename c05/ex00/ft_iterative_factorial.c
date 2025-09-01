/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 08:48:56 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/16 18:50:34 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	result = nb;
	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb != 1)
	{
		result = result * (nb - 1);
		nb--;
	}
	return (result);
}
/*
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%d",ft_iterative_factorial(atoi(argv[1])));
	}
	else 
		write(2,"Error (wrong argument number)",29);
}
*/
