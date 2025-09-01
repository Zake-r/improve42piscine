/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 10:00:13 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/12 10:28:10 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	mystrlen(char *dest)
{
	int	i;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	lenght_dest;

	i = 0;
	lenght_dest = mystrlen(dest);
	while (src[i])
	{
		dest[lenght_dest + i] = src[i];
		i++;
	}
	dest[lenght_dest + i] = '\0';
	return (dest);
}
/*
#include<stdio.h>
int main(void)
{
	char sentence0[50] = "first sentence";
	char sentence1[] = " --> second sentence";
	printf("result : %s",ft_strcat(sentence0,sentence1));
}
*/
