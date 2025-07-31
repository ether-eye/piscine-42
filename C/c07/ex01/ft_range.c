/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaillet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:01:37 by tlaillet          #+#    #+#             */
/*   Updated: 2025/07/24 18:01:44 by tlaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (NULL);
	else
	{
		i = -1;
		while (++i < max - min)
			tab[i] = min + i;
		return (tab);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	*tab;
	int	min;
	int	max;
	
	min = 100;
	max = 375;
	tab = ft_range(min, max);
	if (tab != NULL)
	{
		i = -1;
		while (++i < max - min)
			printf("%d\n", tab[i]);
		free(tab);
	}
	else
		printf("error");
	return(0);
}*/
