/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 13:12:36 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/21 14:49:31 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*create_pointer(int *count)
{
	char	*ptr;

	ptr = (char *)malloc((sizeof(char) * (*count)) + 1);
	if (!ptr)
		return (NULL);
	return (ptr);
}

int	ft_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (i != power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}

int	validate_base(char *str)
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] == ' ' && str[i] == '+' && str[i] == '-')
			return (0);
		while (str[i + j])
		{
			if (str[i] == str[i + j])
				return (0);
			j++;
		}
		j = 1;
		i++;
	}
	return (1);
}

int	check_in_base(char c, char *base, int choise)
{
	int	i;

	if (choise == 1)
	{
		i = 0;
		while (base[i])
		{
			if (base[i] == c)
				return (1);
			i++;
		}
		return (0);
	}
	else
	{
		i = 0;
		while (base[i] != c)
			i++;
		return (i);
	}
}
