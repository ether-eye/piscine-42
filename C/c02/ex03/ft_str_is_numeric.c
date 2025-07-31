/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaillet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 18:56:52 by tlaillet          #+#    #+#             */
/*   Updated: 2025/07/13 18:56:55 by tlaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char *test1 = "42Qs475852";
	char *test2 = "425156";
	char *test3 = "aefaef";
	char *test4 = " ";
	
	printf("test 1: %s -> %d\n", test1, ft_str_is_numeric(test1));
	printf("test 2: %s -> %d\n", test2, ft_str_is_numeric(test2));
	printf("test 3: %s -> %d\n", test3, ft_str_is_numeric(test3));
	printf("test 4: %s -> %d\n", test4, ft_str_is_numeric(test4));
	return (0);
}*/
