/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaillet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 16:23:06 by tlaillet          #+#    #+#             */
/*   Updated: 2025/07/09 16:23:11 by tlaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	reverseletter;

	reverseletter = 'z';
	while (reverseletter >= 'a')
	{
		write(1, &reverseletter, 1);
		reverseletter--;
	}
}
/*

int 	main(void) 
{
	ft_print_reverse_alphabet();
	return 0;
}
*/
