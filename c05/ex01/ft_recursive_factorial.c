/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 09:18:09 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/16 18:54:36 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb != 1)
		nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}
/*
#include <stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("factorial de !%s est : %d",argv[1],
		ft_recursive_factorial(atoi(argv[1])));
	}
}
*/
