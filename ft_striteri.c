/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rualmasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 12:30:34 by rualmasr          #+#    #+#             */
/*   Updated: 2026/10/11 12:30:58 by rualmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void    ft_f_toupper(unsigned int i,char *c)
{
	(void) i;
	if (*c >= 'a' && *c <= 'z')
                *c -=32;
}
int     main()
{
        char s[] = "hello";

       ft_striteri(s,ft_f_toupper);
        printf("%s",s);
}*/
