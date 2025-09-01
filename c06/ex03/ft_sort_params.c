/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 14:11:26 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/17 18:56:48 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort(int argc, char *argv[])
{
	bool	restart;
	int		i;

	restart = true;
	while (restart)
	{
		i = 2;
		restart = false;
		while (i < argc)
		{
			if (ft_strcmp(argv[i - 1], argv[i]) > 0)
			{
				ft_swap(&argv[i - 1], &argv[i]);
				restart = true;
			}
			i++;
		}
		i = 2;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	ft_sort(argc, argv);
	while (argc != i)
	{
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
		j = 0;
	}
	return (0);
}
