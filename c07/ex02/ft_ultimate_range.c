/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaillet <tlaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:57:03 by tlaillet          #+#    #+#             */
/*   Updated: 2025/07/28 14:01:49 by tlaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	cur;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	cur = 0;
	while (min < max)
	{
		(*range)[cur] = min;
		cur++;
		min++;
	}
	return (cur);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*range;
	int	size;
	int	cur;

	size = ft_ultimate_range(&range, 8, 19);
	cur = 0;
	while (cur < size)
	{
		printf("%d => %d\n", cur, range[cur]);
		cur++;
	}
}*/
