/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 10:52:38 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/14 18:41:58 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	mystrlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	lenght_tofind;

	i = 0;
	j = 1;
	lenght_tofind = mystrlen(to_find);
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			while (to_find[j] && str[i + j])
			{
				if (to_find[j] != str[i + j])
					break ;
				j++;
			}	
			if (j == lenght_tofind)
				return (&str[i]);
			else
				j = 1;
		}		
		i++;
	}
	return (0);
}
#include<stdio.h>
int main(void)
{
	char string2[] = "le mot dans ma phrase";
	char string1[] = "mot";
	char string3[] = "autre";
	printf("result : %c\n",*ft_strstr(string2,string1));
	printf("result : %s\n",ft_strstr(string2,string3));
}
