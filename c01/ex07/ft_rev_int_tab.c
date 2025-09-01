/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 10:47:57 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/10 11:39:18 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	c;

	i = 0;
	while (i < size / 2)
	{
		c = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = c;
		i++;
	}
}
/*
int main(void)
{
	int size = 6;
	int i = 0;
	int array[size] = {1, 3, 5, 8, 2, 0};
	ft_rev_int_tab(array, size);
	while(i	< size)
	{
		printf(" %d ", array[i]);
		i++;
	}	
}
*/
