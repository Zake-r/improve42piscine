/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 12:13:06 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/11 21:36:31 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *b;
	*b = *a;
	*a = c;
}
int main(void)
{
	int a;
	int b;
	int *pA;
	int *pB; 

	a = 97;
	b = 98;
	pA = &a;
	pB = &b;
	ft_swap(pA, pB);
	write(1,pA,1);
	write(1,"  ",1);
	write(1,pB,1);
	
	


}
