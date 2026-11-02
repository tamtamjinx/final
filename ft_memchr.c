/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rualmasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 10:36:08 by rualmasr          #+#    #+#             */
/*   Updated: 2026/10/11 10:23:54 by rualmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	size_t			i;

	s1 = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (s1[i] == (unsigned char) c)
			return (&s1[i]);
		i++;
	}
	return (NULL);
}
/*
int main()
{
    char s[10]="hello";
    printf("%s\n",(char *)ft_memchr(s,'e',6));
    printf("%s\n",(char *)ft_memchr(s,'\0',7));
    printf("%p\n",(char *)ft_memchr(s,'W',6));
}*/
