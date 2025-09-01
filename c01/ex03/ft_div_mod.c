/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 13:08:27 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/08 13:48:06 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
	int a = 5;
	int b = 2;

	int result_div;
	int result_mod;

	ft_div_mod(a, b, &result_div, &result_mod);
	printf("div : %d et mod : %d",result_div,result_mod);
}
*/
