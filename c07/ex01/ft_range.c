/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 13:13:27 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/20 18:17:07 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;
	int	ptr_min;

	if (max <= min)
	{
		ptr = 0;
		return (ptr);
	}
	ptr = malloc((max - min) * sizeof(int));
	ptr_min = min;
	i = 0;
	while (i < (max - min))
	{
		ptr[i] = ptr_min;
		ptr_min++;
		i++;
	}
	return (ptr);
}

/*
int main(void)
{
	int *ptr;
	int i;
	int j;
	int min = 2;
	int max = 8;

	ptr = ft_range(min,max);
	i = 0;
	if (ptr == 0)
	{
		printf("%s","Erreur pointer null (max <= min)");
		return (0);
	}
	j = 0;
	while(j < (max - min))
	{
		printf("%d ",ptr[j]);
		j++;
	}
}
*/
