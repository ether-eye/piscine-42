/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaillet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 18:06:39 by tlaillet          #+#    #+#             */
/*   Updated: 2025/07/09 18:06:42 by tlaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(char c)
{
	write(1, &c, 1);
}

void	print_digit(char a, char b, char c)
{
	print_num (a);
	print_num (b);
	print_num (c);
	if (!(a == '7' && b == '8' && c == '9'))
	{
		print_num(',');
		print_num(' ');
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				print_digit(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
/*
int 	main(void)
{
	ft_print_comb();
	return 0;
}
*/
