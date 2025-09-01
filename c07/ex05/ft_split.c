/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 14:01:11 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/22 13:06:30 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_mystrndup(char *src, int n, int size, int i)
{
	char	*ptr;

	size = ft_strlen(src);
	if (src[n + 1] == '\0')
		n++;
	if (size < n)
	{
		ptr = malloc(size * sizeof(char));
		if (!ptr)
			return (NULL);
	}
	else
	{
		ptr = malloc(n * sizeof(char));
		if (!ptr)
			return (NULL);
	}
	i = 0;
	while (size > i && i < n)
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int is_in_charset(char str, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (str == charset[i])
		{
			return (1);
		}	
		i++;
	}
	return (0);
}


int count_words(char *str, char *charset)
{
	int	i;
	int words;

	while (str[i])
	{
		if (is_in_charset(str[i], charset))
		{
			i++;
			continue ;
		}
		else if (i != 0 && (is_in_charset(str[i-1], charset) == 1))
		{
			words++;
			i++;
		}
		else if (i == 0)
		{
			words++;
			i++;
		}
		else
			i++;
	}
	return words;
}

#include <stdio.h>

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		word;
	int i;
	int temp;

	word = 0;
	i = 0;
	temp = 0;
	result = malloc(sizeof(char *) * count_words(str, charset) + 1);
	if (!result)
		return (NULL);
	while (str[i])
	{
		if (is_in_charset(str[i], charset) == 1 || str[i+1] == '\0')
		{
			if (temp != i || str[i+1] == '\0')
			{
				result[word] = ft_mystrndup(&str[temp],(i-temp),0,0);
				word++;
				temp = i;
				if (str[i+1] == '\0')
					break ;
				continue ;
			}
			i++;				
			temp++;

		}
		else if (i != 0 && (is_in_charset(str[i-1], charset) == 1)) 
			i++;
		else
			i++;


	}

	result[word] = 0;
	return (result);
}
int main(void)
{
	char **tab;
	//tab = ft_split("///jules///la//////phra/se///a///spl$it///faire///","///");

	//tab = ft_split("////","//");
	tab = ft_split("LEwwCHATkkkESTzzzLA","wkz");
	int i = 0;
	while (tab[i])
	{
		printf("%s\n",tab[i]);
		i++;

	}
}
