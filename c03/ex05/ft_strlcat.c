/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:24:03 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/14 19:08:38 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *dest)
{
	int	i;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lenght_dest;

	i = 0;
	lenght_dest = ft_strlen(dest);
	if (size <= lenght_dest)
		return (size + ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dest[lenght_dest + i] = src[i];
		i++;
	}
	dest[lenght_dest + i] = '\0';
	return (ft_strlen(dest));
}

#include<stdio.h>
int main(void)
{
	char sentence0[50] = "123";
	char sentence1[23] = "1234567";
	unsigned int size = 20;
	printf("result : %d",ft_strlcat(sentence1,sentence0,size));
//	printf("result : %zu", strlcat(sentence1,sentence0,size));
}
