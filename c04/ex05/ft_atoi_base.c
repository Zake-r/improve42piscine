/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 08:39:23 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/18 13:48:49 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_convert(char *str, char *base, int count, int i)
{
	int	lbase;
	int	number;

	lbase = 0;
	number = 0;
	while (base[lbase])
		lbase++;
	while (count > 0)
	{
		number += check_in_base(str[i - count], base, 0)
			* ft_power(lbase, (count - 1));
		count--;
	}
	return (number);
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

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	signe;
	int	number;
	int	count;

	i = 0;
	number = 0;
	signe = 1;
	count = 0;
	validate_base(base);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = signe * -1;
		i++;
	}
	while (check_in_base(str[i], base, 1) == 1)
	{
		count++;
		i++;
	}
	number = ft_convert (str, base, count, i);
	return (number * signe);
}
/*
   int main(int argc, char *argv[])
   {
   char str[] = "--+101010";
   printf("%d\n",ft_atoi_base(argv[1], argv[2]));

   }
*/
