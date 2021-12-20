/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 12:38:00 by hkahsay           #+#    #+#             */
/*   Updated: 2021/09/15 13:33:11 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_generate_num(int x, int y);
void	ft_print_char(char c);

void	ft_print_comb2(void)
{
	int	h;
	int	t;

	h = 0;
	while (h <= 99)
	{
		t = h + 1;
		while (t <= 99)
		{
			ft_generate_num(h, t);
			t++;
		}
		h++;
	}
}

void	ft_generate_num(int x, int y)
{
	ft_print_char(48 + (x / 10));
	ft_print_char(48 + (x % 10));
	write(1, " ", 1);
	ft_print_char(48 + (y / 10));
	ft_print_char(48 + (y % 10));
	if (x != 98)
	{
		write(1, ", ", 2);
	}	
}

void	ft_print_char(char c)
{
	write(1, &c, 1);
}

/*int main()
{
	ft_print_comb2();
}*/
