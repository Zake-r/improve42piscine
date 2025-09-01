/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 09:27:55 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/11 09:38:47 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (65 <= str[i] && str[i] <= 90)
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
        char sentence0[] = "AGDG";
        char sentence1[] = "4SGDSG3";
        char sentence2[] = "";
        
        printf("result : %d\n",ft_str_is_uppercase(sentence0));   
        printf("result : %d\n",ft_str_is_uppercase(sentence1));   
        printf("result : %d\n",ft_str_is_uppercase(sentence2));   
        printf("result : %d\n",ft_str_is_uppercase("AGGHcJGSHG"));   
}       
*/
