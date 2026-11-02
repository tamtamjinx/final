/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rualmasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 12:07:37 by rualmasr          #+#    #+#             */
/*   Updated: 2026/10/21 12:07:39 by rualmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *longstr, const char *shortstr, size_t n)
{
	size_t	i;
	size_t	j;

	if (shortstr[0] == '\0')
		return ((char *)&longstr[0]);
	i = 0;
	while (longstr[i] != '\0' && i < n)
	{
		j = 0;
		while (shortstr[j] && longstr[i + j] == shortstr[j] && (i + j) < n)
			j++;
		if (shortstr[j] == '\0')
			return ((char *)&longstr[i]);
		i++;
	}
	return (NULL);
}
/*
int main()
{
	printf("%s\n",ft_strnstr("hello world","wor",20));
	printf("%p\n",ft_strnstr("hello world","hi",20));
}*/
