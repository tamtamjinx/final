/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rualmasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 12:27:49 by rualmasr          #+#    #+#             */
/*   Updated: 2026/10/11 12:28:09 by rualmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s1;
	size_t	i;

	if (!s || !f)
		return (NULL);
	s1 = malloc(ft_strlen(s) + 1);
	if (!s1)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		s1[i] = f(i, s[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/*
char    test_toupper(unsigned int i,char c)
{
	(void) i;
        if (c >= 'a' && c <= 'z')
                c -=32;
        return (c);
}

int     main()
{
        char *s=ft_strmapi("helloWorld",test_toupper);
        printf("%s",s);
        free(s);
}*/
