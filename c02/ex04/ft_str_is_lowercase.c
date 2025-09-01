/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 20:12:24 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/11 14:45:49 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (97 <= str[i] && str[i] <= 122)
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
        char sentence0[] = "abgd";
        char sentence1[] = "4sg3";
        char sentence2[] = "";
        
        printf("result : %d\n",ft_str_is_lowercase(sentence0));   
        printf("result : %d\n",ft_str_is_lowercase(sentence1));   
        printf("result : %d\n",ft_str_is_lowercase(sentence2));   
        printf("result : %d\n",ft_str_is_lowercase("Adagdsg"));   
}       
*/
