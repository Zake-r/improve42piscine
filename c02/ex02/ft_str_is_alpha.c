/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 17:57:22 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/11 20:54:03 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((65 <= str[i] && str[i] <= 90) || (97 <= str[i] && str[i] <= 122))
		{
			i++;
			continue ;
		}
		else
			return (0);
	}			
	return (1);
}
/*
int main(void)
{
	char sentence0[] = "LeasgSGJaggjsGKD";
	char sentence1[] = "ej$$g&";
	char sentence2[] = "";
	
	printf("result %d\n",ft_str_is_alpha(sentence0));
	printf("result %d\n",ft_str_is_alpha(sentence1));
	printf("result %d\n",ft_str_is_alpha(sentence2));
	
}
*/
