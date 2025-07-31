/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaillet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:08:35 by tlaillet          #+#    #+#             */
/*   Updated: 2025/07/14 14:08:39 by tlaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < (size -1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	tab[10] = {30, 4, 6, 8, 25, 15, 18, 1, 6, 2};
	ft_sort_int_tab(tab, 10);
	for(int i = 0; i < 10; i++)
	{
		printf("%d ", tab[i]);
	}
}*/
