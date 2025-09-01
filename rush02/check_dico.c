/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dico.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acatanho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 15:55:10 by acatanho          #+#    #+#             */
/*   Updated: 2025/08/24 23:38:41 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	check_before(char *str, int *i)
{
	if (str[*i] == '\n')
	{
		(*i)++;
		return (1);
	}
	if (!(str[*i] >= '0' && str[*i] <= '9'))
		return (0);
	while (str[*i] >= '0' && str[*i] <= '9')
		(*i)++;
	while (str[*i] == ' ')
		(*i)++;
	if (str [*i] != ':')
		return (0);
	else
		(*i)++;
	while (str[*i] == ' ')
		(*i)++;
	return (1);
}

int	check_dico(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(check_before(str, &i)))
			return (0);
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		while (str[i] >= 32 && str[i] <= 126)
			i++;
		if (str[i] == '\n')
			i++;
		else
			return (0);
	}
	return (1);
}
