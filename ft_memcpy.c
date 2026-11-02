/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rualmasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 10:18:05 by rualmasr          #+#    #+#             */
/*   Updated: 2026/09/30 10:21:47 by rualmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	s = (const unsigned char *) src;
	d = (unsigned char *) dest;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int main()
{
    char s[]="hello";
    char d[6] = {0};
    ft_memcpy(d,s,5);
    printf("s is = %s\n",s);
        printf("d is = %s\n",d);

	char s1[]="world";
    char d1[10] = {0};
    ft_memcpy(d1,s1,2);
    printf("s is = %s\n",s1);
        printf("d is = %s",d1);
}*/
