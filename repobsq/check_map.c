/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:37:31 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/26 22:14:48 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	special_case(int l1, char *info, int l_info)
{
	if (l1 == 0)
		return (0);
	if (info[l_info - 3] == info[l_info - 2]
		|| info[l_info - 3] == info[l_info - 1]
		|| info[l_info - 2] == info[l_info - 1])
		return (0);
	return (1);
}

int	check_buffer(char *buffer, int l1, char *info, int l_info)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
		{
			count++;
			if (lenght_line(&buffer[i - l1]) != l1)
				return (0);
		}
		if (!(buffer[i] == info[l_info - 1]
				|| buffer[i] == info[l_info - 2]
				|| buffer[i] == info[l_info - 3]
				|| buffer[i] == '\n'))
			return (0);
		i++;
	}
	return (count);
}

int	check_map(char *buffer, char *info)
{
	int	i;
	int	l1;
	int	l_info;
	int	count;

	count = 0;
	i = 0;
	l1 = lenght_line(buffer);
	l_info = ft_strlen(info);
	if (special_case(l1, info, l_info) == 0)
		return (0);
	count = check_buffer(buffer, l1, info, l_info);
	if (count == 0)
		return (0);
	while (count != 0)
	{
		count /= 10;
		i++;
	}
	if (l_info != (i + 3))
		return (0);
	return (1);
}
