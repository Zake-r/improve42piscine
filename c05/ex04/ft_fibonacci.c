/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 11:13:18 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/18 18:54:05 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	else 
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	printf("le nombre est :%d",ft_fibonacci(atoi(argv[1])));
	return argc;
}
