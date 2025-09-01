/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 10:08:24 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/11 10:45:22 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_ft(int *ptn)
{
	*ptn = 42;
}








int	main(void)
{
	int	number;
 	int *ptn = &number;

	number = 41;
	printf("number = %d",number);
	ft_ft(ptn);




	printf("number = %d",number);
}
