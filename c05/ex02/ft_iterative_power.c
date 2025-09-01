/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 10:47:27 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/16 19:11:31 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power != 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
#include<stdlib.h>
#include<stdio.h>
int main(int argc, char *argv[])
{
	printf("%d",ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
}
*/
