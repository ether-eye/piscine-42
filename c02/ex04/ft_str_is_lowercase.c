/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaillet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:09:20 by tlaillet          #+#    #+#             */
/*   Updated: 2025/07/14 17:09:28 by tlaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
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
	char *test1 = "s475sfdgshhgs852";
	char *test2 = "wfwfwUFURT";
	char *test3 = "aefaef";
	char *test4 = " ";
	
	printf("test 1: %s -> %d\n", test1, ft_str_is_lowercase(test1));
	printf("test 2: %s -> %d\n", test2, ft_str_is_lowercase(test2));
	printf("test 3: %s -> %d\n", test3, ft_str_is_lowercase(test3));
	printf("test 4: %s -> %d\n", test4, ft_str_is_lowercase(test4));
	return (0);
}*/
