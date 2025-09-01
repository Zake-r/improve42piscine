/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 14:20:43 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/12 09:57:47 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
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

	printf("result : %d\n", ft_strcmp(sentence1,sentence2));
	printf("result : %d\n", ft_strcmp(sentence2,sentence3));
	printf("result : %d\n", ft_strcmp(sentence3,sentence4));

}
*/
