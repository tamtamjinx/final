/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rualmasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 11:23:25 by rualmasr          #+#    #+#             */
/*   Updated: 2026/09/30 15:56:27 by rualmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	ssize;
	size_t	i;

	i = 0;
	ssize = ft_strlen(src);
	if (dsize == 0)
		return (ssize);
	while (src[i] != '\0' && i < (dsize -1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ssize);
}
/*
int main()
{
    char *s = "hello world!";
    char *d;
    printf("%zu \n",ft_strlcpy(d,s,6));
    printf("%s\n",d);
    printf("%zu",ft_strlen(d)+1);

}*/
