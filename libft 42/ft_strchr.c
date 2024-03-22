/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstacul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:20:43 by tstacul           #+#    #+#             */
/*   Updated: 2024/03/21 16:30:48 by tstacul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			return ((char *)str + i);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char str[] = "Hola mundo";
	int c = 'a';
	char *result = ft_strchr(str, c);

	if (result)
	{
		printf("character '%c' found at %p \n", c, result);
	}
	else 
	{
		printf( "character '%c' not found in the string \n", c);
	}
	return (0);
}*/
