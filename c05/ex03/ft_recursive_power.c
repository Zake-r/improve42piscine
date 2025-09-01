/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 10:58:56 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/16 19:14:31 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power != 1)
	{
		nb = nb * ft_recursive_power(nb, (power - 1));
	}
	return (nb);
}
/*
#include<stdlib.h>
#include<stdio.h>
int main(int argc, char *argv[])
{
	printf("nombre puissance : %d",
	ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
}
*/
