/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaillet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 20:09:48 by tlaillet          #+#    #+#             */
/*   Updated: 2025/07/15 20:09:50 by tlaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 ||!((str[i - 1] >= '0' && str[i - 1] <= '9')
				|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{	
	char str1[] = "salut, comment Ca va? 42mots, quattre+deux";
	char str2[] = "yo, cOmMent tU VAS?";
	printf("Avant : %s\n", str1);
	ft_strcapitalize(str1);
	printf("Apres : %s\n\n", str1);
	printf("Avant : %s\n", str2);
	ft_strcapitalize(str2);
	printf("Apres : %s\n\n", str2);
	return (0);
}*/
