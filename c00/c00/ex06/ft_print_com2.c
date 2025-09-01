/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_com2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbossuyt <jbossuyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:17:09 by jbossuyt          #+#    #+#             */
/*   Updated: 2025/08/07 16:24:29 by jbossuyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_com2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = 48;
	b = 48;
	c = 48;
	d = 49;

	while (a <= 57)
	{
		while (b <= 56)
		{
			while (c <= 57)
			{
				while (d <= 58)
				{
					write(1,&a,1);
					write(1,&b,1);
					write(1," ",1);
					write(1,&c,1);
					write(1,&d,1);
					write(1,", ",1);
					d++;
				}
				c++;
			}
			d++;
		}
		a++;
	}

}

int main(void)
{
	ft_print_com2();
}




