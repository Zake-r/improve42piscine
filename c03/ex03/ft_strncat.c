/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 10:29:37 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/25 19:02:43 by jbossuyt         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	lenght_dest;

	i = 0;
	lenght_dest = mystrlen(dest);
	while (src[i] && i < nb)
	{
		dest[lenght_dest + i] = src[i];
		i++;
	}
	dest[lenght_dest + i] = '\0';
	return (dest);
}
#include<stdio.h>
int main(void)
{
	char sentence0[50] = "first sentence";
	char sentence1[] = " --> second sentence";
	unsigned int size = 10;
	printf("result : %s",ft_strncat(sentence0,sentence1,size));
}
