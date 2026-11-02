/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rualmasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 12:19:42 by rualmasr          #+#    #+#             */
/*   Updated: 2026/10/11 12:19:44 by rualmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	ssize;

	if (!s)
		return (NULL);
	ssize = ft_strlen(s);
	if (start >= ssize)
		len = 0;
	else if (len > ssize - start)
		len = ssize - start;
	sub = (char *)malloc (len + 1);
	if (!sub)
		return (NULL);
	ft_memcpy(sub, s + start, len);
	sub[len] = '\0';
	return (sub);
}
/*
int	main()
{
	char *s1 = "hello world";
	char *s2 =ft_substr(s1,1,10);
	printf("%s",s2);
	free(s2);
}*/
