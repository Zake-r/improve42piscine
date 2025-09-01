/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:33:30 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/15 12:59:40 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_base(int nbr, char *base)
{
	char	number;

	number = ft_strlen(base);
	if (nbr != 0)
	{
		ft_base(nbr / number, base);
		ft_putchar(base[nbr % number]);
	}
}

int	checkbase(char *str)
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i])
	{
		if (!((str[i] >= '0' && str[i] <= '9')
				|| (str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
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

void	ft_putnbr_base(int nbr, char *base)
{
	if (checkbase(base) == 1)
	{
		ft_base(nbr, base);
	}
}
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	char sentence[] = "0123456789";
	char sentence1[] = "01";
	char sentence3[] = "0123456789ABCDEF";
	char sentence4[] = "poneyvif";
	char sentence5[] = "122";

	ft_putnbr_base(atoi(argv[1]), argv[2]);	
}
