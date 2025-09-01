/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 13:21:33 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/11 17:50:03 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';	
	return (i);
}

int main(void)
{
	char sentence0[] = "ma premiere phrase";
	char sentence1[40];
	unsigned int size = 12;
	printf("result : %d",ft_strlcpy(sentence1, sentence0, size));	

	
}
