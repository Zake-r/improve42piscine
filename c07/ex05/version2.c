/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 14:01:11 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/21 18:46:24 by jbossuyt         ###   ########.fr       */
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

int	count_word_is_charset(char *str, char *charset, int choise, int words)
{
	int	i;

	i = 0;
	if (choise == 1)
	{
		while (str[i])
		{
			if (count_word_is_charset(&str[i], charset, 0, 0)
				&& (i != 0) && ((i + ft_strlen(charset)) != '\0'))
				words++;
			i++;
		}
		return (words + 1);
	}
	else
	{
		while (charset[i])
		{
			if (!(charset[i] == str[i]))
				return (0);
			i++;
		}
		return (1);
	}
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

int	logic(char **result, char *str, char *charset, int word)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (str[i])
	{
		if (count_word_is_charset(&str[i], charset, 0, 0) || str[i + 1] == '\0')
		{
			if (temp == i)
			{
				i += ft_strlen(charset);
				temp += ft_strlen(charset);
				continue ;
			}
			result[word] = ft_mystrndup(&str[temp], (i - temp), 0, 0);
			i = (i + ft_strlen(charset) - 1);
			if (ft_strlen(str) < i)
				break ;
			word++;
			temp = i + 1;
		}
		i++;
	}
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		word;

	word = 0;
	result = malloc(sizeof(char *)
			* count_word_is_charset(str, charset, 1, 0) + 1);
	if (!result)
		return (NULL);
	word = logic(result, str, charset, word);
	result[word] = 0;
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
	char **tab;
	tab = ft_split("///jules///la//////phra/se///a///spl$it///faire///","///");

	//tab = ft_split("////","//");
	//tab2 = ft_split("la/ere/a/split/faire","/");
	int i = 0;
	while (tab[i])
	{
		printf("%s\n",tab[i]);
		i++;

	}
}
*/
