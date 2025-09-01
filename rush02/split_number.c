/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 15:49:30 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/24 23:34:03 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strlen2(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strndup(char *src, int n)
{
	char	*ptr;
	int		size;
	int		i;

	size = ft_strlen(src);
	if (size < n)
	{
		ptr = malloc((size * sizeof(char)) + 1);
		if (!ptr)
			return (NULL);
	}
	else
	{
		ptr = malloc((n * sizeof(char)) + 1);
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

char	**logic(char *str, char **result, int lnum, int word)
{
	int	i;
	int	t;

	i = (lnum % 3);
	t = (lnum % 3);
	while (str[i])
	{
		if ((((i + 1 - (lnum % 3)) % 3) == 0) || (i + 1) == ft_strlen(str))
		{
			if ((i + 1) == (ft_strlen(str)))
				result[word] = ft_strndup(&str[t], (i + 2 - t));
			else
				result[word] = ft_strndup(&str[t], (i + 1 - t));
			t = i + 1;
			word++;
		}
		i++;
	}
	result[word] = 0;
	return (result);
}

char	**split_hundred(char *str, int lnum)
{
	int		i;
	int		word;
	char	**result;

	i = 0;
	word = 0;
	if ((lnum % 3) != 0)
		result = malloc(sizeof(char *) * ((lnum / 3) + 2));
	else
	{
		result = malloc(sizeof(char *) * ((lnum / 3) + 1));
		if (!result)
			return (NULL);
	}
	if ((lnum % 3) != 0)
	{
		result[word] = ft_strndup(&str[i], (lnum % 3));
		word++;
	}
	result = logic(str, result, lnum, word);
	return (result);
}
