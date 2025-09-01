/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 15:39:05 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/20 18:23:21 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	range_min;

	i = 0;
	range_min = min;
	if (max <= min)
	{
		range = 0;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (range == NULL)
		return (-1);
	while (i < (max - min))
	{
		(*range)[i] = range_min;
		range_min++;
		i++;
	}
	return (i);
}

/*
int main(void)
{
	int *range;
	int min = 2;
	int max = 8;
	int number;

	range = NULL;
	printf("%d\n",number = ft_ultimate_range(&range,min,max));	
	int i = 0;
	while(i < number)
	{
		printf("%d",range[i]);	
		i++;
	}
}
*/
