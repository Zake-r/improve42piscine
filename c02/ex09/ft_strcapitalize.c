/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 11:25:42 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/11 19:59:56 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (65 <= str[i] && str[i] <= 90)
			str[i] = str[i] + 32;
		if (97 <= str[i] && str[i] <= 122 && 97
			<= str[i + 1] && str[i + 1] <= 122)
		{
			if (i == 0)
				str[i] = str[i] - 32;
			if (((i != 0) && (str[i - 1] <= 48 && str[i - 1] >= 32))
				|| (str[i - 1] >= 58 && str[i - 1] <= 64)
				|| (str[i - 1] >= 91 && str[i - 1] <= 96)
				|| (str[i - 1] >= 123 && str[i - 1] <= 126))
				str[i] = str[i] - 32;
		}	
		i++;
	}	
	return (str);
}
/*
int main(void)
{
	char sentence[] = "hi, how are\\you? 42words foRty-two; fifty+and+one";
	printf("result : %s", ft_strcapitalize(sentence));
}
*/
