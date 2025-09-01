/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 19:56:39 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/11 16:52:18 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (48 <= str[i] && str[i] <= 57)
		{
			i++;
			continue ;
		}
		else
		{
			return (0);
		}
	}			
	return (1);
}
/*
int main(void)
{
	char sentence0[] = "3252";
	char sentence1[] = "4sg3";
	char sentence2[] = "";
	
	printf("result : %d\n",ft_str_is_numeric(sentence0));	
	printf("result : %d\n",ft_str_is_numeric(sentence1));	
	printf("result : %d\n",ft_str_is_numeric(sentence2));	
}	
*/
