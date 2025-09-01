/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 10:49:06 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/11 16:46:16 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (32 <= str[i] && str[i] <= 126)
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
        char sentence1[] = "4SGD\nG3";
        char sentence2[] = "";
        
        printf("result : %d\n",ft_str_is_printable(sentence0));   
        printf("result : %d\n",ft_str_is_printable(sentence1));   
        printf("result : %d\n",ft_str_is_printable(sentence2));   
}       
*/
