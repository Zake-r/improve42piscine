/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 09:21:35 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/12 09:58:51 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
#include<stdio.h>
int main(void)
{
	char sentence1[] = "ABCA";
	char sentence2[] = "ABC";
	char sentence3[] = "ABC";
	char sentence4[] = "ABCB";
	unsigned size = 2;

	printf("result : %d\n", ft_strncmp(sentence1,sentence2,size));
	printf("result : %d\n", ft_strncmp(sentence2,sentence3,size));
	printf("result : %d\n", ft_strncmp(sentence3,sentence4,size));

}
*/
