/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 15:15:42 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/16 19:23:36 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i <= nb)
	{
		if ((i * i) == nb)
			return (i);
		else
			i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	printf("sqare root : %d", ft_sqrt(atoi(argv[1])));
}
*/
