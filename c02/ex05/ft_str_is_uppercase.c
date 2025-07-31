/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaillet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 18:27:52 by tlaillet          #+#    #+#             */
/*   Updated: 2025/07/14 18:27:56 by tlaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
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
	char *test1 = "YGIUGYUSgUIGI";
	char *test2 = "US85UGSSO";
	char *test3 = "UFFIKGGKINBIGBUFDS";
	char *test4 = " ";
	
	printf("test 1: %s -> %d\n", test1, ft_str_is_uppercase(test1));
	printf("test 2: %s -> %d\n", test2, ft_str_is_uppercase(test2));
	printf("test 3: %s -> %d\n", test3, ft_str_is_uppercase(test3));
	printf("test 4: %s -> %d\n", test4, ft_str_is_uppercase(test4));
	return (0);
}*/
