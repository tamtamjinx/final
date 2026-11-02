/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rualmasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 12:23:08 by rualmasr          #+#    #+#             */
/*   Updated: 2026/10/11 12:27:12 by rualmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(int n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	num;
	char	*s;
	size_t	i;

	i = ft_count(n);
	num = n;
	s = malloc(i + 1);
	if (!s)
		return (NULL);
	s[i] = '\0';
	if (num < 0)
	{
		s[0] = '-';
		num *= -1;
	}
	if (num == 0)
		s[0] = '0';
	while (num != 0)
	{
		--i;
		s[i] = (num % 10) + '0';
		num /= 10;
	}
	return (s);
}
/*
int     main()
{
        char *s3=ft_itoa(5);
        printf("%s",s3);
        free(s3);
}
*/
