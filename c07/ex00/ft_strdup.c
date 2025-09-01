/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 11:42:06 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/20 19:03:36 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		size;
	int		i;

	size = ft_strlen(src);
	ptr = malloc(size * sizeof(char));
	i = 0;
	while (size > i)
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*
#include<stdio.h>

int main(void)
{
	char sentence[] = "duplicate/";
	printf("%s",ft_strdup(sentence));

}
*/
