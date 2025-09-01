/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 11:28:48 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/11 08:58:35 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdbool.h>
#include<stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int c;
	bool restart;	
	
	restart = true;
	while (restart)
	{
		i = 0;
		restart = false;
		while (i < size -1)
		{
			if (tab[i] > tab[i + 1])
			{
				printf("tab[i] : %d , tab[i+1] : %d\n",tab[i],tab[i+1]);
				c = tab[i];
				tab[i] = tab[i+1];			
				tab[i+1] = c;
				restart = true;
			}	
			i++;
		}

	}
}

int main(void)
{
	int size = 7;
	int array[7] = {1,6,5,-7,8,3,2};
	int i = 0;
	ft_sort_int_tab(array,size);
	while (i < size)
	{
		printf(" %d ", array[i]);
		i++;
	}	

}
