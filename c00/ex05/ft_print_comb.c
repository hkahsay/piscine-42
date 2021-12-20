/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 15:25:03 by hkahsay           #+#    #+#             */
/*   Updated: 2021/09/04 18:28:41 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	ft_write(char x, char y, char z);

void	ft_print_comb(void)

{
	char	h;
	char	t;
	char	u;

	h = '0';
	t = '1';
	u = '2';
	while (h <= '7')
	{
		t = h + 1;
		while (t <= '8')
		{
			u = t + 1;
			while (u <= '9')
			{
				ft_write(h, t, u);
				u++;
			}
			t++;
		}
		h++;
	}
}

void	ft_write(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if (x != '7')
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}
