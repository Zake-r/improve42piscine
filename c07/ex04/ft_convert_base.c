/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 07:26:47 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/21 18:44:40 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define INT_MAX 2147483647
#define INT_MIN -2147483648 

int		ft_power(int nb, int power);

int		validate_base(char *str);

int		check_in_base(char c, char *base, int choise);

char	*create_pointer(int *count);

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

char	*ft_base(int nbr, char *base, int *count, int signe)
{
	int		lbase;
	char	*ptr;

	lbase = 0;
	while (base[lbase])
		lbase++;
	*count = *count + 1;
	if (nbr == 0)
	{
		if (signe == 1)
		{
			*count = *count + 1;
			ptr = create_pointer(count);
			ptr[0] = '-';
			ptr += 1;
		}
		else
			ptr = create_pointer(count);
	}
	if (nbr != 0)
		ptr = ft_base(nbr / lbase, base, count, signe);
	*ptr = base[nbr % lbase];
	ptr++;
	return (ptr);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nombre;
	int		count;
	char	*ptr;
	int		signe;

	signe = 0;
	if (validate_base(base_from) != 1 || validate_base(base_to) != 1)
		return (0);
	nombre = ft_atoi_base(nbr, base_from);
	if (nombre > INT_MAX || nombre < INT_MIN)
		return (0);
	if (nombre < 0)
	{
		signe = 1;
		nombre = -nombre;
	}
	count = 0;
	ptr = ft_base(nombre, base_to, &count, signe);
	return (ptr - count);
}
#include<stdio.h>
int main(int argc, char *argv[])
{
	printf("%s",ft_convert_base(argv[1],"01"," !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~"));

}
