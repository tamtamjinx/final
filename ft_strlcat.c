/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rualmasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 12:20:12 by rualmasr          #+#    #+#             */
/*   Updated: 2026/10/26 12:32:37 by rualmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	ssize;
	size_t	ddsize;
	size_t	i;

	ssize = ft_strlen(src);
	i = 0;
	ddsize = ft_strlen(dst);
	if (dsize <= ddsize)
		return (ssize + dsize);
	while (src[i] != '\0' && (ddsize + i) < (dsize -1))
	{
		dst[ddsize + i] = src[i];
		i++;
	}
	dst[ddsize + i] = '\0';
	return (ssize + ddsize);
}
/*
int main()
{
	char d[50] = "HI :";
    char *s = "Hello World";;

    printf("%zu\n",ft_strlcat(d,s,10));
    printf("%s\n",d);
    printf("%zu\n",ft_strlen(d) + 1);

     char d1[50] = "HI :";
    char *s1 = "Hello World";;

    printf("%zu\n",ft_strlcat(d1,s1,2));
    printf("%s\n",d1);
    printf("%zu\n",ft_strlen(d1) + 1);
}*/
