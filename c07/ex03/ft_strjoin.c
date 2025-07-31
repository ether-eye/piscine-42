/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaillet <tlaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:57:03 by tlaillet          #+#    #+#             */
/*   Updated: 2025/07/30 20:13:39 by tlaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != 0)
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	dest_len;

	len = 0;
	dest_len = ft_strlen(dest);
	while (src[len] != 0)
	{
		dest[dest_len] = src[len];
		len++;
		dest_len++;
	}
	dest[dest_len] = 0;
	return (dest);
}

int	size_of_str(int size, char **strs, char *sep)
{
	int	len;
	int	join_size;

	join_size = 0;
	len = 0;
	while (len < size)
	{
		join_size += ft_strlen(strs[len]);
		len++;
	}
	join_size += (size - 1) * ft_strlen(sep);
	return (join_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		len;
	int		join_size;

	if (size <= 0)
	{
		join = (char *)malloc(sizeof(char));
		join[0] = '\0';
		return (join);
	}
	join_size = size_of_str(size, strs, sep);
	join = (char *)malloc(sizeof(char) * (join_size + 1));
	join[0] = '\0';
	len = 0;
	while (len < size)
	{
		join = ft_strcat(join, strs[len]);
		if (len != size - 1)
			join = ft_strcat(join, sep);
		len++;
	}
	return (join);
}
/*
#include <stdio.h>

int	main(void)
{
	char	**strs;

	strs = (char **)malloc(sizeof(char *) * 3);
	strs[0] = (char *)malloc(sizeof(char) * 4);
	strs[0] = "hey";
	strs[1] = (char *)malloc(sizeof(char) * 4);
	strs[1] = "you";
	strs[2] = (char *)malloc(sizeof(char) * 3);
	strs[2] = "42";
	printf("%s", ft_strjoin(3, strs, " - "));
	return (0);
}*/