/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rualmasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 11:21:34 by rualmasr          #+#    #+#             */
/*   Updated: 2026/09/30 11:23:02 by rualmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int main()
{
	printf("%zu\n",strlen("hello"));
	printf("%zu\n",strlen(""));
	printf("%zu\n",strlen("22"));
	printf("%zu\n",strlen("hello world"));
}*/
