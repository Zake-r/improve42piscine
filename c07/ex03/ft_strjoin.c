/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 05:48:40 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/21 16:14:53 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *dest)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	lenght_dest;

	i = 0;
	lenght_dest = ft_strlen(dest);
	while (src[i])
	{
		dest[lenght_dest + i] = src[i];
		i++;
	}
	dest[lenght_dest + i] = '\0';
	return (dest);
}

int	ft_lenght(int size, char **strs)
{
	int	i;
	int	lenght;

	i = 0;
	lenght = 0;
	while (i < size)
	{
		lenght += ft_strlen(strs[i]);
		i++;
	}
	return (lenght);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*all;	
	int		i;

	i = 0;
	if (size == 0)
	{
		all = malloc(1 * sizeof(char));
		if (!all)
			return (NULL);
		*all = '\0';
		return (all);
	}
	all = malloc(((ft_lenght(size, strs) + ((size - 1)
						* ft_strlen(sep))) * sizeof(char)) + 1);
	if (!all)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_strcat(all, strs[i]);
		if (i != (size - 1))
			ft_strcat(all, sep);
		i++;
	}
	return (all);
}
/*
#include<unistd.h>
#include <stdio.h>
int main(void)
{
	char *sentences[] = {"first","second","third","fourth"};
	char *sep =" > ";
	int size = 4;
	char *all2;
	all2 = ft_strjoin(size,sentences,sep);	
	
	while (*all2)
	{
		write(1,all2,1);
		all2++;
	}
}
*/
