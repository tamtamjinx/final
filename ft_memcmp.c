/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rualmasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 10:59:40 by rualmasr          #+#    #+#             */
/*   Updated: 2026/09/30 11:05:08 by rualmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*c1;
	const unsigned char	*c2;
	size_t				i;

	c1 = (const unsigned char *) s1;
	c2 = (const unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (c1[i] != c2[i])
			return (c1[i] - c2[i]);
		i++;
	}
	return (0);
}
/*
int main ()
{
    char s1[]="helloewew";
    char s2[]= "helloaa";
    char s3[]= "zzzz";

    printf("%d\n",ft_memcmp(s1,s2,5));
     printf("%d\n",ft_memcmp(s1,s2,9));
     printf("%d\n",ft_memcmp(s1,s3,5));
}*/
