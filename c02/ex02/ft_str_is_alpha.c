/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaillet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 17:43:58 by tlaillet          #+#    #+#             */
/*   Updated: 2025/07/13 17:44:02 by tlaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
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
	char *test1 = "vvevjkjfBGVBV4U";
	char *test2 = "QTYuijdfjhSYGkkdyy";
	char *test3 = "aefaHJDef";
	char *test4 = " ";
	
	printf("test 1: %s -> %d\n", test1, ft_str_is_alpha(test1));
	printf("test 2: %s -> %d\n", test2, ft_str_is_alpha(test2));
	printf("test 3: %s -> %d\n", test3, ft_str_is_alpha(test3));
	printf("test 4: %s -> %d\n", test4, ft_str_is_alpha(test4));
	return (0);
}*/
